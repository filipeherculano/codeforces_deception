#include <bits/stdc++.h>

#define FOR(i, a, n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define all(a) a.begin(),a.end()
#define pb push_back
#define LSOne(S) (S & (-S))
#define MAXN 100010

typedef unsigned long long llu;
typedef long long ll;
typedef long double ld;

const ll INF = 1000000000000000000;
const double EPS = 1e-9;

using namespace std;

int n,m,s;
int fre[MAXN], arr[MAXN], p[MAXN];
// 1 is free

bool check(int d){
	int cnt = 0;
	for(int i = d; i >= 0; i--){
		if(fre[arr[i]] || p[arr[i]] > i) {if(cnt) cnt--;}
		else {
			cnt += p[arr[i]];
			fre[arr[i]] = 1;
		}
		
	}
	bool res = true;
	for(int i = 1; i <= m; i++) {
		if(fre[i]) fre[i] = 0;
		else res = false;
	}
	if(cnt) res = false;
	return res;
}

int bs(int h, int t){
	int b;
	while(h <= t){
		b = (h+t)/2;
		if(check(b)) {
			if(b == 0 || !check(b-1)) return b+1;
			else t = b - 1;
		} else h = b + 1;	
	}
	return -1;
}

int main(){
	//freopen("input.txt", "rt", stdin);
	//freopen("output.txt", "wt", stdout);
	scanf("%d %d", &n, &m);
	REP(i,n) scanf("%d", &arr[i]);
	fre[0] = 1;
	REP(i,m) scanf("%d", &p[i+1]);
	printf("%d\n", bs(0, n-1));	
	return 0;
}


