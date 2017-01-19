#include <bits/stdc++.h>

#define FOR(i, a, n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define all(a) a.begin(),a.end()
#define pb push_back
#define LSOne(S) (S & (-S))

typedef unsigned long long llu;
typedef long long ll;
typedef long double ld;

const ll INF = 1000000000000000000;
const double EPS = 1e-9;

using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	//freopen("output.txt", "wt", stdout);
	ll n,k,x;
	cin >> n >> k >> x;
	priority_queue< pair<ll,ll>, vector< pair<ll,ll> >, less< pair<ll,ll> > > np;
	priority_queue< pair<ll,ll>, vector< pair<ll,ll> >, greater< pair<ll,ll> > > pn;
	ll v[n];
	REP(i,n){
		cin >> v[i];
		if(v[i] < 0) np.push(make_pair(v[i], i));
		else pn.push(make_pair(v[i], i));
	}
	if(np.empty() || np.size() % 2 == 0){
		ll qtA, qtB;
		qtA = (np.empty() ? 0: 1 + (abs(np.top().first)/x) );
		qtB = (pn.empty() ? 0: 1 + (pn.top().first/x) );
		if(qtA > k) qtA = 0;
		if(qtB > k) qtB = 0;

		if(qtA == 0 && qtB == 0){
			if(pn.empty()){
				ll temp = np.top().first + (k*x);
				ll i = np.top().second;
				np.pop(); np.push(make_pair(temp,i));
			} else if(np.empty()){
				ll temp = pn.top().first - (k*x);
				ll i = pn.top().second;
				pn.pop(); pn.push(make_pair(temp,i));
			} else if(abs(np.top().first) <= pn.top().first){
				ll temp = np.top().first + (k*x);
				ll i = np.top().second;
				np.pop(); np.push(make_pair(temp,i));
			} else{
				ll temp = pn.top().first - (k*x);
				ll i = pn.top().second;
				pn.pop(); pn.push(make_pair(temp,i));
			}
			k = 0;
		} else if(qtA ^ qtB){
			if(qtA){
				ll temp = np.top().first + (qtA*x);
				ll i = np.top().second;
				np.pop(); pn.push(make_pair(temp,i));
				k -= qtA;
			} else {
				ll temp = pn.top().first - (qtB*x);
				ll i = pn.top().second;
				pn.pop(); np.push(make_pair(temp,i));
				k -= qtB;
			}
		} else {
			if(qtA > qtB){
				ll temp = pn.top().first - (qtB*x);
				ll i = pn.top().second;
				pn.pop(); np.push(make_pair(temp,i));
				k -= qtB;
			} else if(qtA < qtB){
				ll temp = np.top().first + (qtA*x);
				ll i = np.top().second;
				np.pop(); pn.push(make_pair(temp,i));
				k -= qtA;
			} else {
				if(abs(np.top().first) <= pn.top().first){
					ll temp = np.top().first + (qtA*x);
					ll i = np.top().second;
					np.pop(); pn.push(make_pair(temp,i));
					k -= qtA;
				} else {
					ll temp = pn.top().first - (qtB*x);
					ll i = pn.top().second;
					pn.pop(); np.push(make_pair(temp,i));
					k -= qtB;
				}
			}
		}
	}
	for(ll i = 0; i < k; i++){
		if(np.empty()){
			ll temp = pn.top().first + x;
			ll j = pn.top().second;
			pn.pop(); pn.push(make_pair(temp,j));
		} else if(pn.empty()){
			ll temp = np.top().first - x;
			ll j = np.top().second;
			np.pop(); np.push(make_pair(temp,j));
		} else if(abs(np.top().first) > pn.top().first){
			ll temp = pn.top().first + x;
			ll j = pn.top().second;
			pn.pop(); pn.push(make_pair(temp,j));
		} else {
			ll temp = np.top().first - x;
			ll j = np.top().second;
			np.pop(); np.push(make_pair(temp,j));
		} 
	}
	while(!np.empty()) v[np.top().second] = np.top().first, np.pop();
	while(!pn.empty()) v[pn.top().second] = pn.top().first, pn.pop();
	REP(i,n) cout << v[i] << " ";
	cout << endl;
	return 0;
}
















