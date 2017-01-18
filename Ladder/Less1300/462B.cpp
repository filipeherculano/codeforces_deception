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
	//freopen("input.txt", "rt", stdin);
	//freopen("output.txt", "wt", stdout);
	ll k, n, cnt = 0;
	vector<ll> vi;
	ll buc[27] = {0};
	scanf("%lld %lld%*c", &n, &k);
	string line;
	getline(cin,line);
	REP(i,line.size()) buc[line[i]-'A']++;
	REP(i,27) if(buc[i]) vi.pb(buc[i]);
	sort(all(vi));
	for(int i = vi.size()-1; i >= 0 && k; i--){
		cnt += min(vi[i], k)*min(vi[i], k);
		k -= min(vi[i],k);
	}
	cout << cnt << endl;
	return 0;
}
