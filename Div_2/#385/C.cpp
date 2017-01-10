#include <bits/stdc++.h>

#define FOR(i, a, n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define all(a) a.begin(),a.end()
#define pb push_back
#define LSOne(S) (S & (-S))
#define MAXN 1010

typedef unsigned long long llu;
typedef long long ll;
typedef long double ld;

const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;

using namespace std;

int n, m, k;
int dsu[MAXN], sz[MAXN], con[MAXN], gov[MAXN], govIdx[MAXN];

int calc(int city, int conCity, int g, int conG){
	int sum = city+g, pa; sum--;
	pa = ((sum+1)*sum)/2;
	return pa - conCity - conG;
}

int main(){
	//freopen("input.txt", "rt", stdin);
	//freopen("output.txt", "wt", stdout);
	int res = 0;
	cin >> n >> m >> k;
	REP(i,k) {
		cin >> govIdx[i];
		gov[govIdx[i]] = 1;
	}
	REP(i,n){
		dsu[i+1] = i+1;
		con[i+1] = 0;
		sz[i+1] = 1;
	}
	REP(i,m){
		int a, b, repA, repB;
		cin >> a >> b;
		repA = a; repB = b;
		while(dsu[repA] != repA) repA = dsu[repA];
		while(dsu[repB] != repB) repB = dsu[repB];
		if((repA > repB && !gov[repA]) || gov[repB]) swap(repA,repB);
		// repA is either gov or less;
		if(repA != repB){
			con[repA] += con[repB] + 1;
			sz[repA] += sz[repB];
			dsu[repB] = repA;
		} else con[repA]++;
		dsu[a] = repA;
		dsu[b] = repA;
	}

	int size = 0, conec = 0;
	for(int i = 1; i <= n; i++){
		if(!gov[i] && dsu[i] == i){
			conec += con[i];
			size += sz[i];
		}
	}
	int idx = govIdx[0], big = sz[idx];
	for(int obj : govIdx){
		if(sz[obj] > big){
			idx = obj;
			big = sz[obj];
		}	
	}
	int cnt = 0;
	for(int i = 1; i <= n; i++){
		if(gov[i] && i != idx){
			cnt += calc(0,0, sz[i], con[i]);	
		}
	}
	cout << cnt + calc(size,conec,sz[idx],con[idx]) << endl;
	return 0;
}







