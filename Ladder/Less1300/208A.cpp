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
	string line, res;
	getline(cin, line); line.pb('z'); line.pb('z');
	REP(i, line.size()-2){
		if(!(line[i] == 'W' && line[i+1] == 'U' && line[i+2] == 'B')) res.pb(line[i]);
		else {
			if(res.size() != 0 && res.back() != ' ') res.pb(' ');
			i += 2;
		}
	}
	cout << res << endl;
  return 0;
}
