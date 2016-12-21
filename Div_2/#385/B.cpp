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
	bool ok = true;
	int n, m, mx = INF, my = INF, MX = -1, MY = -1;
	scanf("%d %d%*c", &n, &m);
	string mat[n];
	REP(i, n) cin >> mat[i];
	REP(i, n){
		REP(j, mat[i].size()){
			if(mat[i][j] == 'X'){
				mx = min(mx, i);
				my = min(my, j);
				MX = max(MX, i);
				MY = max(MY, j);			
			}			
		}
	}
	FOR(i, mx, MX){
		FOR(j, my, MY){
			if(mat[i][j] == '.'){
				ok = false;		
			}
		}
	}
	printf("%s", ok ? "YES\n":"NO\n");
  return 0;
}
