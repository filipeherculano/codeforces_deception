#include <bits/stdc++.h>

#define FOR(i, a, n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define all(a) a.begin(),a.end()
#define pb push_back
#define LSOne(S) (S & (-S))
#define MAXN 6400040

typedef unsigned long long llu;
typedef long long ll;
typedef long double ld;

const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;

using namespace std;

bool bit[MAXN];
int used[MAXN], esq[MAXN], dir[MAXN], cur = 1;

void add(int num){
	int no = 0;
	for(int shift = 30; shift >= -1; shift--){
		used[no]++;
		if(shift >= 0){
			if(num&(1 << shift)){
				if(dir[no] == 0){
					bit[cur] = 1;
					used[cur] = 0;
					dir[no] = cur;
					cur++;
				}
				no = dir[no];
			} else {
				if(esq[no] == 0){
					bit[cur] = 0;
					used[cur] = 0;
					esq[no] = cur;
					cur++;
				}
				no = esq[no];
			}
		}
	}
}

void rmv(int num){
	int no = 0;
	for(int shift = 30; shift >= -1; shift--){
		used[no]--;
		if(shift >= 0){
			if(num&(1 << shift)) no = dir[no];
			else no = esq[no];
		}
	}
}

int SearchXor(int num){
	int no = 0;	
	for(int shift = 31; shift >= 0; shift--){
		if(no) num ^= (bit[no] << shift);
		if(shift > 0){
			if(num&(1 << (shift-1))){
				if(esq[no] == 0 || used[esq[no]] == 0) no = dir[no];
				else no = esq[no];
			} else {
				if(dir[no] == 0 || used[dir[no]] == 0) no = esq[no];
				else no = dir[no];
			}
		}
	}
	return num;
}

int main(){
        //freopen("input.txt", "rt", stdin);
        //freopen("output.txt", "wt", stdout);
	int q, num;
	char c;
	scanf("%d%*c", &q);
	bit[0] = 0; used[0] = 0; esq[0] = 0; dir[0] = 0;
	add(0);
	REP(i,q){
		scanf("%c %d%*c", &c, &num);
		if(c == '?'){
			if(used[0] == 0) cout << num << endl; 
			else cout << SearchXor(num) << endl;
		}
		else if(c == '+') add(num);	
		else rmv(num);
	}
	return 0;
}



