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
	ll x,y,n, mod = 1000000007;
	cin >> x >> y >> n;
	ll v[6]; 
	v[0] = x; v[1] = y; v[2] = y-x; 
	v[3] = -x; v[4] = -y; v[5] = x-y;
	for(int i = 0; i < 6; i++) v[i] %= mod;
	cout << (mod+v[(n-1)%6]) % mod << endl;
  return 0;
}
