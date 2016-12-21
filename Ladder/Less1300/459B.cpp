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

int main(){
	ll n, aux;
	cin >> n;
	map<ll,ll> MAP;
	map<ll,ll>::iterator it;
	map<ll,ll>::reverse_iterator rit;
	REP(i, n) {
		cin >> aux;
		it = MAP.find(aux);
		if(it == MAP.end()) MAP.insert(make_pair(aux, 1));
		else it->second++;
	}
	it = MAP.begin(); rit = MAP.rbegin();
	cout << rit->first - it->first << " ";
	if(rit->first - it->first != 0) cout << (rit->second)*(it->second) << endl;
	else cout << ((it->second)*(it->second - 1LL)) / 2LL << endl;
	return 0;
}
