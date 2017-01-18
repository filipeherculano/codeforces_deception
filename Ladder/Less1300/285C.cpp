#include <bits/stdc++.h>

#define FOR(i, a, n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define all(a) a.begin(),a.end()
#define pb push_back
#define LSOne(S) (S & (-S))
#define MAXN 300030

typedef unsigned long long llu;
typedef long long ll;
typedef long double ld;

const ll INF = 0x3f3f3f3f3f3f3f3f;
const double EPS = 1e-9;

using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	//freopen("output.txt", "wt", stdout);
	ll n, cnt = 0;
	cin >> n;
	vector<ll> a(n);
	REP(i,n) cin >> a[i];
	sort(all(a));
	for(ll i = 1; i <= n; i++) cnt += abs(i-a[i-1]);
	cout << cnt << endl;
	return 0;
}
