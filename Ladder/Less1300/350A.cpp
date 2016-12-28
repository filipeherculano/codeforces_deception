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
	int n, m, hi = INF, lo = -INF;
	cin >> n >> m;
	int c[n], w[m];
	REP(i, n){
		cin >> c[i];
		lo = max(lo, c[i]);
	}
	REP(i, m){
		cin >> w[i];
		hi = min(hi, w[i]);
	}
	while(lo < hi){
		bool found = false;
		REP(i, n)
			if(c[i]*2 <= lo)
				found = true;
		if(found) break;
		else lo++;
	}
	if(lo < hi) cout << lo << endl;
	else cout << "-1\n";
  return 0;
}
