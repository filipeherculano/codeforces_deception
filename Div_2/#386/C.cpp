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

int s, x1, x2, t1, t2, p, d, least, TIME, dir, last;

int solve(int pos, int tempo){
	if(pos == x1 && d == dir) return tempo;
	
	if(d == 1){
		if(pos < x1) return solve(x1, tempo+(t1*abs(x1-pos)));
		else {
			d = -1;		
			return solve(last, tempo+(t1*abs(last-pos)));
		}
	} else if(d == -1){
		if(pos > x1) return solve(x1, tempo+(t1*abs(x1-pos)));
		else {
			d = 1;
			return solve(0, tempo+(t1*pos));
		}
	}
}

int main(){
	cin >> s >> x1 >> x2;
	cin >> t1 >> t2;
	cin >> p >> d;
	last = s;
	if(x1 < x2) dir = 1;
	else dir = -1;
	TIME += solve(p, 0) + (t1*abs(x1-x2));
	least = min(t2*abs(x1-x2), TIME);
	cout << least << endl;
  return 0;
}
