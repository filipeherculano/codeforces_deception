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
	int m, n, sum = 0;
	cin >> m >> n;
	vector<int> v(m);
	REP(i, m) cin >> v[i];
	sort(all(v));
	REP(i, n) if(v[i] < 0) sum += abs(v[i]);
	cout << sum << endl;
  return 0;
}
