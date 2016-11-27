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
	ll n, n1, n2, partSum = 0, i;
	long double sum = 0.0;
	scanf("%lld %lld %lld", &n, &n1, &n2);
	vector<ll> v(n);
	REP(i, n) scanf("%lld", &v[i]);
	sort(all(v));
	if(n1 > n2) swap(n1,n2);
	for(i = n-1; i >= 0 && i >= n-n1; i--) partSum += v[i];
	sum += (long double)partSum / (long double)n1;
	partSum = 0;
	for(; i >= 0 && i >= n-(n1+n2); i--) partSum += v[i];
	sum += (long double)partSum / (long double)n2;
	printf("%.8Lf\n", sum);
  return 0;
}
