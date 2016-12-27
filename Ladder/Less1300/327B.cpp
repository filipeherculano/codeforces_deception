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

bool isPrime(int n){
	if(n <= 1) return false;
	else if(n <= 3) return true;
	else if(n % 2 == 0 || n % 3 == 0) return false;

	int i = 5;
	while(i*i <= n){
		if(n % i == 0 || n % (i+2) == 0)
			return false;
		i += 6;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(0);
	int n, start = 2;
	cin >> n;
	while(n){
		if(isPrime(start)) {
			cout << start << " ";
			n--;
		}
		start++;
	}
	cout << endl;
  return 0;
}
