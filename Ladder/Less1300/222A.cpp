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
	int n, k;
	cin >> n >> k; k--;
	int v[n];
	REP(i, n) cin >> v[i];
	int idx;
	for(idx = n-1; idx >= 0; idx--)
		if(v[idx] != v[n-1])
			break;
	if(idx < k) cout << idx+1 << endl;
	else cout << "-1\n";
	return 0;
}
