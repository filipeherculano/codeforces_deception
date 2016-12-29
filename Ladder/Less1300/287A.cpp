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
	//freopen("input.txt", "rt", stdin);
	//freopen("output.txt", "wt", stdout);
	ios_base::sync_with_stdio(0);
	int missingDot = 5, missingHash = 5;
	char mat[4][4];
	REP(i, 4) REP(j, 4) cin >> mat[i][j];
	REP(i, 3) {
		REP(j, 3){
			int h = 0, d = 0;
			for(int lin = i; lin < i+2; lin++){
				for(int col = j; col < j+2; col++){
					if(mat[lin][col] == '.') d++;
					else h++;
				}
			} 
			missingDot = min(missingDot, h);
			missingHash = min(missingHash, d);
		}
	}
	if(missingDot <= 1 || missingHash <= 1) cout << "YES\n";
	else cout << "NO\n";
  return 0;
}
