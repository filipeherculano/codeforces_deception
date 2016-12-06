#include <bits/stdc++.h>

#define FOR(i, a, n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define all(a) a.begin(),a.end()
#define pb push_back

typedef unsigned long long llu;
typedef long long ll;
typedef long double ld;

using namespace std;

int isPrime(int n){
	for(int i = 2; i < n; i++){
		if(n % i == 0)
			return false;
	}
	return true;
}

int next_prime(int n){
	for(int i = n+1; i <= 50; i++){
		if(isPrime(i))
			return i;
	}
	return -1;
}

int main(){
	int n, m, next;
	scanf("%d %d", &n, &m);
	next = next_prime(n);
	if(next == m) cout << "YES\n";
	else cout << "NO\n";
  return 0;
}
