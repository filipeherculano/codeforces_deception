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
	ll d2, d3, d5, d6, m, total = 0;
	scanf("%lld %lld %lld %lld", &d2, &d3, &d5, &d6);
	m = min(min(d2,d5), d6);
	total += m*256;
	d2 -= m; d5 -= m; d6 -= m;
	m = min(d3, d2);
	total += m*32;
	printf("%lld\n", total);
  return 0;
}
