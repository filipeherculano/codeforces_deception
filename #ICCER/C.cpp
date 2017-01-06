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

const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;

using namespace std;

ll n, UFDS[MAXN], size[MAXN], active[MAXN];

int main(){
	//freopen("input.txt", "rt", stdin);
	//freopen("output.txt", "wt", stdout);
	ios_base::sync_with_stdio(0);
	ll big = 0; 
	scanf("%lld", &n);
	ll a[n], cmd[n];
	vector<ll> res;
	REP(i,n) {
		scanf("%lld", &a[i]);
		UFDS[i] = i;
	}
	REP(i,n) scanf("%lld", &cmd[i]), cmd[i]--;
	res.pb(big);
	for(int i = n-1; i >= 0; i--){
		big = max(big, a[cmd[i]]);
		size[cmd[i]] = a[cmd[i]];
		active[cmd[i]] = 1;
		if(active[cmd[i]+1]){
			int esq = cmd[i], dir = cmd[i]+1;
			while(UFDS[esq] != esq) esq = UFDS[esq];
			while(UFDS[dir] != dir) dir = UFDS[dir];
			if(esq != dir){
				UFDS[dir] = esq;
				size[esq] += size[dir];
				big = max(big, size[esq]);
			}
		}
		if(cmd[i] && active[cmd[i]-1]){
			int dir = cmd[i], esq = cmd[i]-1;
			while(UFDS[esq] != esq) esq = UFDS[esq];
			while(UFDS[dir] != dir) dir = UFDS[dir];
			if(esq != dir){
				UFDS[dir] = esq;
				size[esq] += size[dir];
				big = max(big, size[esq]);
			}
		}
		res.pb(big);
	}
	for(int i = res.size()-2; i >= 0; i--) cout << res[i] << endl;
  return 0;
}




