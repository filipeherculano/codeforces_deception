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
	int t, sx, sy, ex, ey;
	cin >> t >> sx >> sy >> ex >> ey;
	string line;
	cin >> line;
	int hor = ex-sx, ver = ey-sy, idx = 0;
	while(idx < line.size()){
		if(hor < 0 && line[idx] == 'W') hor++; 
		else if(hor > 0 && line[idx] == 'E') hor--;

		if(ver < 0 && line[idx] == 'S') ver++;
		else if(ver > 0 && line[idx] == 'N') ver--;
		
		if(hor == 0 && ver == 0) break;
		idx++;
	}
	if(hor == 0 && ver == 0) cout << idx+1 << endl;
	else cout << "-1" << endl;	
	return 0;
}
