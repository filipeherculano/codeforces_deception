#include <bits/stdc++.h>

#define FOR(i, a, n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define all(a) a.begin(),a.end()
#define pb push_back

typedef unsigned long long llu;
typedef long long ll;
typedef long double ld;

using namespace std;

ll mexp(ll b, ll n, ll m){
	if(n == 0) return 1;
	else if(n%2 == 0) return mexp((b*b)%m, n/2, m);
	else return (b*mexp((b*b)%m, (n-1)/2, m))%m;
}

int main(){
	ll n;
	scanf("%lld", &n);
	cout << mexp(1378, n, 10) << endl;
  return 0;
}
