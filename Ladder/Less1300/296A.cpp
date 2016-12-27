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
	ios_base::sync_with_stdio(0);
	int n, MAX = 1;
	cin >> n;
	vector<int> v(n), cnt(n, 0);
	REP(i, n) cin >> v[i];
	sort(all(v));
	cnt[0] = 1;
	for(int i = 1; i < n; i++){
		if(v[i] == v[i-1]) cnt[i] = 1 + cnt[i-1];
		else cnt[i] = 1;
		MAX = max(MAX, cnt[i]);
	}
	if(MAX > (n+1)/2) cout << "NO\n";
	else cout << "YES\n";	
  return 0;
}
