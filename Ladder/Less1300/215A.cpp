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
	int n, m, it = -1, cnt = 0;
	cin >> n;
	int a[n];
	REP(i, n) cin >> a[i];
	cin >> m;
	int b[m];
	REP(i, m) cin >> b[i];
  REP(i, n){
  	REP(j, m){
  		if(b[j] % a[i] == 0 && b[j]/a[i] >= it){
  			if(b[j]/a[i] == it) cnt++;
  			else cnt = 1;
  			it = b[j]/a[i];
  		}
  	}
  }
  cout << cnt << endl;
  return 0;
}
