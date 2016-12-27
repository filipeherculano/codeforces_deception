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
	string line;
	int v[26] = {0}, cnt = 0;
	getline(cin, line);
	REP(i, line.size()) v[line[i]-'a']++;
	REP(i, 26) if(v[i]&1) cnt++;
	if(cnt == 0 || cnt == 1) cout << "First\n";
	else {
		if((cnt-1)&1) cout << "Second\n";
		else cout << "First\n";
	}
  return 0;
}
