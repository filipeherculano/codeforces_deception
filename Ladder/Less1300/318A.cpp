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
	ll n, k;
	cin >> n >> k;
	if(k > (n+1)/2){ // even
		k -= (n+1)/2;
		cout << 2 + (k-1)*2 << endl;
	} else cout << 1 + (k-1)*2 << endl;
  return 0;
}
