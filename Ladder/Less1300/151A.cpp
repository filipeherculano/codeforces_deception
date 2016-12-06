#include <bits/stdc++.h>

#define FOR(i, a, n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define all(a) a.begin(),a.end()
#define pb push_back

typedef unsigned long long llu;
typedef long long ll;
typedef long double ld;

using namespace std;

int main(){
	int n, k, l, c, d, p , nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
 	cout << min(min(((k*l)/(nl*n)), ((d*c)/n)), (p/(np*n))) << endl;
  return 0;
}
