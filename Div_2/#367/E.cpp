#include <bits/stdc++.h>

#define FOR(i, a, n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define all(a) a.begin(),a.end()
#define pb push_back
#define LSOne(S) (S & (-S))
#define dbg(x) cerr << ">>>> " << x << endl;
#define _ << " , " <<
#define MAXN 1100

typedef unsigned long long llu;
typedef long long ll;
typedef long double ld;

const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;

using namespace std;

struct node{
	int val;
	struct node * ptr[4];
};

struct node mat[MAXN][MAXN]; 

int dx[] = {-1,0,0,1}, dy[] = {0,-1,1,0};

bool check(int i, int j, int n, int m){
	return i >= 0 && i < n && j >= 0 && j < m;
}

void query(int a, int b, int c, int d, int h, int w){
		struct node * ptr1 = &mat[a][0];
		struct node * ptr2 = &mat[c][0];
		REP(i,b) ptr1 = ptr1->ptr[2];
		REP(i,d) ptr2 = ptr2->ptr[2];

		struct node * it1 = ptr1;
		struct node * it2 = ptr2;
		REP(i,w-1){
				swap(it1->ptr[0]->ptr[3], it2->ptr[0]->ptr[3]);
				swap(it1->ptr[0], it2->ptr[0]);
				it1 = it1->ptr[2];
				it2 = it2->ptr[2];
		}
		swap(it1->ptr[0]->ptr[3], it2->ptr[0]->ptr[3]);
		swap(it1->ptr[0], it2->ptr[0]);
		REP(i,h-1){
				swap(it1->ptr[2]->ptr[1], it2->ptr[2]->ptr[1]);
				swap(it1->ptr[2], it2->ptr[2]);
				it1 = it1->ptr[3];
				it2 = it2->ptr[3];
		}
		swap(it1->ptr[2]->ptr[1], it2->ptr[2]->ptr[1]);
		swap(it1->ptr[2], it2->ptr[2]);
		it1 = ptr1;
		it2 = ptr2;
		REP(i,h-1){
				swap(it1->ptr[1]->ptr[2], it2->ptr[1]->ptr[2]);
				swap(it1->ptr[1], it2->ptr[1]);
				it1 = it1->ptr[3];
				it2 = it2->ptr[3];
		}
		swap(it1->ptr[1]->ptr[2], it2->ptr[1]->ptr[2]);
		swap(it1->ptr[1], it2->ptr[1]);
		REP(i,w-1){
				swap(it1->ptr[3]->ptr[0], it2->ptr[3]->ptr[0]);
				swap(it1->ptr[3], it2->ptr[3]);
				it1 = it1->ptr[2];
				it2 = it2->ptr[2];
		}
		swap(it1->ptr[3]->ptr[0], it2->ptr[3]->ptr[0]);
		swap(it1->ptr[3], it2->ptr[3]);
}

int main(){
		//freopen("input.txt", "rt", stdin);
	//freopen("output.txt", "wt", stdout);
	int n,m,q, aux, curr = 0;
	scanf("%d %d %d", &n, &m, &q);
	REP(i,n+2){
		REP(j,m+2){
			int aux = -1;
			if(i != 0 && j != 0 && i != n+1 && j != m+1) scanf("%d", &aux);
			mat[i][j].val = aux;
			REP(z,4){
				if(check(i+dx[z],j+dy[z], n+2, m+2)) mat[i][j].ptr[z] = &mat[i+dx[z]][j+dy[z]];	
				else mat[i][j].ptr[z] = NULL;
			}
		}
	}
	REP(i,q){
		int a, b, c, d, h ,w;
		scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &h, &w);
		query(a,b,c,d,h,w);
	}
	REP(i,n+2){
		struct node *start = &mat[i][0];
		while(start != NULL){
			if(start->val != -1) printf("%d ", start->val);
			start = start->ptr[2];
		}
		if(i != 0 && i != n+1) cout << endl;
	}
	return 0;
}
