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
	ios_base::sync_with_stdio(0);
	int n, m;
	scanf("%d", &n);
	vector<ll> v(n), u(n);
	REP(i,n) scanf("%lld", &v[i]), u[i] = v[i];
	sort(all(u));
	FOR(i, 1, n) v[i] += v[i-1], u[i] += u[i-1];
	scanf("%d", &m);
	REP(i,m){
		int t, l, r;
		scanf("%d %d %d", &t, &l, &r); l--; r--;
		if(t == 1) printf("%lld\n", v[r] - (l == 0 ? 0:v[l-1]));
		else printf("%lld\n", u[r] - (l == 0 ? 0:u[l-1]));
	}
  return 0;
}
