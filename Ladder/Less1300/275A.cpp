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
  	int m[3][3], t[3][3];
	REP(i, 3) REP(j, 3) {m[i][j] = 1; cin >> t[i][j]; t[i][j] %= 2;}
	REP(i, 3) {
		REP(j, 3){
			if(t[i][j]){
				m[i][j] ^= 1;
				if(i) m[i-1][j] ^= 1;
				if(j) m[i][j-1] ^= 1;
				if(i != 2) m[i+1][j] ^= 1;
				if(j != 2) m[i][j+1] ^= 1;
			}
		}
	}
	REP(i, 3) {REP(j, 3) printf("%d", m[i][j]); cout << endl;}
	return 0;
}
