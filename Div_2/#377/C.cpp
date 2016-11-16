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
	unsigned long long b, d, s, maximum, skip = 0;
	cin >> b >> d >> s;
	maximum = max(max(b,d),s);
	maximum--;
	if(maximum >= b) skip += maximum - b;
	if(maximum >= d) skip += maximum - d;
	if(maximum >= s) skip += maximum - s;
	printf("%llu\n", skip);
  return 0;
}
