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
	set<string> c;
	string line;
	getline(cin, line);
	c.insert(line);
	int sz = line.size();
	REP(i, sz){
		line.pb(line[0]);
		line.erase(line.begin());
		c.insert(line);
	}
	cout << c.size() << endl;
 return 0;
}
