#include <bits/stdc++.h>

#define FOR(i, a, n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define all(a) a.begin(),a.end()
#define pb push_back
#define LSOne(S) (S & (-S))
#define MAXN 200020

typedef unsigned long long llu;
typedef long long ll;
typedef long double ld;

const ll INF = 0x3f3f3f3f3f3f3f3f;
const double EPS = 1e-9;

using namespace std;

ll n, resposta = -INF;
vector<ll> adj[MAXN];
ll wadj[MAXN];
bool vis[MAXN], ok = false;

ll __backtrack(ll i, ll best){
	bool ant = ok;
	if(!ok){
		int cnt = 0;
		REP(j,adj[i].size()){
			if(!vis[adj[i][j]]){
				cnt++;
				if(cnt >= 2){
					ok = true;
					break;
				}
			}
		}
	}

	vector<ll> ans;
	ll res = best;
	vis[i] = true;
	REP(j,adj[i].size()){
		if(!vis[adj[i][j]]){
			ans.pb(__backtrack(adj[i][j], (ok == false ? best:max(best, wadj[adj[i][j]])) ));
			res = max(res, ans[ans.size()-1]);			
		}
	}
	if(ant == false && ok == true){
		sort(all(ans));
		resposta = ans[ans.size()-1]+ans[ans.size()-2];
	} else return res;	
}

ll _backtrack(ll i){
	ll res = wadj[i];
	vis[i] = true;
	REP(j,adj[i].size()){
		if(!vis[adj[i][j]]){
			res += _backtrack(adj[i][j]);
		}
	}
	wadj[i] = res;
	return res;
}

int main(){
	//freopen("input.txt", "rt", stdin);
	//freopen("output.txt", "wt", stdout);
	scanf("%lld", &n);
	REP(i,n) scanf("%lld", &wadj[i+1]);
	REP(i,n-1){
		ll a, b;
		scanf("%lld %lld", &a, &b);
		adj[a].pb(b);
		adj[b].pb(a);
	}
	_backtrack(1);
	REP(i,n+1) vis[i] = false;
	__backtrack(1,-INF);
	if(resposta == -INF) printf("Impossible\n");
	else cout << resposta << endl;
	return 0;
}
