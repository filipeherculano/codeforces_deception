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

bool isPrime(ll n){
	if(n == 2 || n == 3) return true;
	if(n == 1 || n % 2 == 0 || n % 3 == 0) return false;
	for(int i = 5; i*i <= n; i += 6){
		if(n % i == 0 || n % (i+2) == 0) return false;
	}
	return true;
}

int main(){
	//freopen("input.txt", "rt", stdin);
	//freopen("output.txt", "wt", stdout);
	ios_base::sync_with_stdio(0);
	ll n, num;
	cin >> n;
	REP(i,n){
		cin >> num;
		ll aux = (ll)sqrt(num);
		if(aux*aux == num && isPrime(aux)) cout << "YES\n";
		else cout << "NO\n";
	}
  return 0;
}
