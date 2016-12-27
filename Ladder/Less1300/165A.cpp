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
	int n, cnt = 0;
	cin >> n;
	int dots[n][2];
	REP(i, n) cin >> dots[i][0] >> dots[i][1];
	REP(i, n){
		int bitmask = 0;
		REP(j, n){
			if(i != j){
				if(dots[i][1] > dots[j][1] && dots[i][0] == dots[j][0]) bitmask |= 1;
				if(dots[i][1] < dots[j][1] && dots[i][0] == dots[j][0]) bitmask |= 2;
				if(dots[i][0] > dots[j][0] && dots[i][1] == dots[j][1]) bitmask |= 4;
				if(dots[i][0] < dots[j][0] && dots[i][1] == dots[j][1]) bitmask |= 8;
			}
		}
		if(bitmask == 15) cnt++;
	}
	cout << cnt << endl;
  return 0;
}
