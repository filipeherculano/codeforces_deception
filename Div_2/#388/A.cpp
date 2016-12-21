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

int main(){
	int n;
	cin >> n;
	if(n&1){
		cout << (n-1)/2 << endl;
		cout << "3 ";
		if(n > 3) REP(i, (n-3)/2) cout << "2 ";
	} else {
		cout << n/2 << endl;
		REP(i, n/2) cout << "2 ";
	}
	cout << endl;
  return 0;
}
