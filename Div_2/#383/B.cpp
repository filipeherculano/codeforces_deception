#include <bits/stdc++.h>

#define FOR(i, a, n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define all(a) a.begin(),a.end()
#define pb push_back
#define LSOne(S) (S & (-S))

typedef unsigned long long llu;
typedef long long ll;
typedef long double ld;

const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;

using namespace std;

ll paSum(ll n){
        if(n <= 1) return 0;
        return ((1+n-1)*(n-1))/2;
}

int main(){
        //freopen("input.txt", "rt", stdin);
        //freopen("output.txt", "wt", stdout);
        ios_base::sync_with_stdio(0);
        ll cnt = 0;
        ll n, x, aux;
        scanf("%lld %lld", &n, &x);
        map<ll,ll> mapa;
        set<ll> visited;
        REP(i,n) {
                scanf("%lld", &aux);
                if(mapa.find(aux) == mapa.end()) mapa.insert(make_pair(aux, 1LL));
                else mapa[aux]++;
        }
        for(pair<ll,ll> obj : mapa){
                if(visited.find(obj.first) == visited.end()){
                        ll val = x ^ obj.first;
                        if(visited.find(val) == visited.end() && mapa.find(val) != mapa.end()){
                                if(val == obj.first){
                                        cnt += paSum(mapa[val]);
                                        visited.insert(val);
                                } else {
                                        cnt += mapa[obj.first] * mapa[val];
                                        visited.insert(obj.first);
                                        visited.insert(val);
                                }
                        }
                }
        }
        cout << cnt << endl;
  return 0;
}

