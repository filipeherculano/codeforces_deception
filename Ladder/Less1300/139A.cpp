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
	int n, total = 0, idx;
	cin >> n;
	int v[7];
	REP(i, 7) cin >> v[i];
	for(idx = 0; n > v[idx]; idx = (idx+1)%7) n -= v[idx];
	cout << idx+1 << endl;
  return 0;
}
