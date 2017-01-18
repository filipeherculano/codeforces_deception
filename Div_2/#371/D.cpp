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

int n;
tuple<int,int,int,int> res1, res2;
map< tuple<int,int,int,int>, int> memory;


int query(int x1, int y1, int x2, int y2){
	if(memory.find(make_tuple(x1,y1,x2,y2)) != memory.end())
		return memory[make_tuple(x1,y1,x2,y2)];
	int res;
	printf("? %d %d %d %d\n", x1, y1, x2, y2);
	fflush(stdout);
	scanf("%d", &res);
	memory.insert(make_pair(make_tuple(x1,y1,x2,y2), res));
	return res;
}

tuple<int,int,int,int> find(int x1, int y1, int x2, int y2){
	tuple<int,int,int,int> quad = make_tuple(-INF, -INF, INF, INF); // x1,y1,x2,y2
	int b, h, t, left, right;
	h = y1, t = y2;
	while(h <= t){
		b = (h+t)/2;
		if(query(x1, y1, x2, b) == 0) h = b+1;
		else t = b-1, get<3>(quad) = min(get<3>(quad), b);
	}
	y2 = get<3>(quad);
	h = x1; t = x2;
	while(h <= t){
		b = (h+t)/2;
		if(query(x1, y1, b, y2) == 0) h = b+1;
		else t = b-1, get<2>(quad) = min(get<2>(quad), b);
	}
	x2 = get<2>(quad);
	h = y1; t = y2;
	while(h <= t){
		b = (h+t)/2;
		if(query(x1, b, x2, y2) == 0) t = b-1;
		else h = b+1, get<1>(quad) = max(get<1>(quad), b);
	}
	y1 = get<1>(quad);
	h = x1; t = x2;
	while(h <= t){
		b = (h+t)/2;
		if(query(b, y1, x2, y2) == 0) t = b-1;
		else h = b+1, get<0>(quad) = max(get<0>(quad), b);
	}
	return quad;
}

int findDivCol(int h, int t){
	int b, left;
	while(h <= t){
		b = (h+t)/2;
		left = query(1,1,n,b);
		if(left == 1){
			if(query(1,b+1,n,n) == 1) return b;
			else t = b-1;
		} else if(left == 0) {
			if(query(1,b+1,n,n) == 0) break;
			else h = b+1;
		} else if(left == 2) t = b-1;
	}
	return -1;
}

int findDivLin(int h, int t){
	int b, top;
	while(h <= t){
		b = (h+t)/2;
		top = query(b, 1, n, n);
		if(top == 1){
			if(query(1, 1, b-1, n) == 1) return b;
			else h = b+1;
		} else if(top == 0){
			if(query(1, 1, b-1, n) == 0) break;
			else t = b-1;	
		} else if(top == 2) h = b+1;
	}
	return -1;
}

int main(){
        //freopen("input.txt", "rt", stdin);
        //freopen("output.txt", "wt", stdout);
	int lin, col;
	scanf("%d", &n);
	col = findDivCol(1, n);
	if(col == -1) {
		lin = findDivLin(1,n);
		res1 = find(lin, 1, n, n);
		res2 = find(1, 1, lin-1, n);
	} else {
		res1 = find(1, 1, n, col);
		res2 = find(1, col+1, n, n);
	}
	printf("! %d %d %d %d %d %d %d %d\n", get<0>(res1), get<1>(res1), get<2>(res1), get<3>(res1),
					      get<0>(res2), get<1>(res2), get<2>(res2), get<3>(res2));
	fflush(stdout);
	return 0;
}







