#include <bits/stdc++.h>

#define FOR(i, a, n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define all(a) a.begin(),a.end()
#define pb push_back

typedef unsigned long long llu;
typedef long long ll;
typedef long double ld;

using namespace std;

bool isPrime(ll n){
	if(n <= 1) return false;
	else if(n <= 3) return true;
	else if(n % 2 == 0 || n % 3 == 0) return false;
	
	ll i = 5;
	while(i*i <= n){
		if(n % i == 0 || n % (i+2) == 0)
			return false;
		i = i+6;
	}
	return true;
}

int main(){
	ll n;
	
	scanf("%lld", &n);
	
	if(isPrime(n)) printf("1\n");
	else {
		if(n&1) {
		  if(isPrime(n-2)) printf("2\n");
		  else printf("3\n");
		} else printf("2\n");
	}
	return 0;
}
