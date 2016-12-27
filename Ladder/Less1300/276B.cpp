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
	int cnt = 0, turn = 0, even, odd;
	string line;
	cin >> line;
	int v[26] = {0};
	REP(i, line.size()) v[line[i]-'a']++;
	REP(i, 26) if(v[i]&1) cnt++;
	while(1){
		even = -1; odd = -1;
		if(cnt == 0 || cnt == 1) break;
		
		REP(i, 26){
			if(even == -1 && v[i] && v[i] % 2 == 0) even = i;
			else if(odd == -1 && v[i]&1) odd = i;
		}
		
		if(even != -1) {
			v[even]--;
			if(v[even]&1) cnt++;		
		} else if(odd != -1) {
			v[odd]--;
			cnt--;
		}
		
		turn++;
	}
	if(turn&1) cout << "Second\n";
	else cout << "First\n";
  return 0;
}
