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

const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;

using namespace std;

ll n, m, k, x, s;
vector< pair<ll,ll> > t1, t2; 
// t1 = sec / mana
// t2 = potions / mana

ll time(int i, int j){ 
	return t1[i].first * (n - t2[j].first);
}

ll bs(int h, int t, int i){
	int b;
	while(h <= t){
		b = (h+t)/2;
		if(t2[b].second <= s-t1[i].second){
			if(b == k-1 || t2[b+1].second > s-t1[i].second) return time(i,b);
			else h = b+1;
		} else t = b-1;
	}
	return 0x3f3f3f3f3f3f3f3f;
}

int main(){
        //freopen("input.txt", "rt", stdin);
        //freopen("output.txt", "wt", stdout);
        ll aux;
        cin >> n >> m >> k >> x >> s;
        REP(i,m){
        	cin >> aux;
        	t1.pb(make_pair(aux,-1));
        }
        REP(i,m) cin >> t1[i].second;
        REP(i,k){
        	cin >> aux;
        	t2.pb(make_pair(aux,-1));
        }
        REP(i,k) cin >> t2[i].second;
        ll best = n*x;
        REP(i,k) 
        	if(t2[i].second <= s)
        		best = min(best, (n-t2[i].first)*x);
	      REP(i,m){
	      	if(t1[i].second <= s) {
	      		best = min(best, n*t1[i].first);
	      		best = min(best, bs(0, k-1, i));
	      	}
	      }
	      cout << best << endl;
        return 0;
}







