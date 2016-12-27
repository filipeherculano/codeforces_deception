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
	int a1, a2, a3, x, y, z;
	cin >> a1 >> a2 >> a3;
	x = sqrt((a1*a2)/a3);
	y = sqrt((a1*a3)/a2);
	z = sqrt((a2*a3)/a1);
	cout << 4*(x+y+z) << endl;
  return 0;
}
