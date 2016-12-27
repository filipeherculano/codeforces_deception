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
	ios_base::sync_with_stdio(0);
	bool ok = true;
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	int v[260] = {0};
	REP(i, s1.size()) v[s1[i]]++;
	REP(i, s2.size()){
		if(s2[i] != ' '){
			if(v[s2[i]] == 0) ok = false;
			v[s2[i]]--;
		}
	}
	printf("%s", ok ? "YES\n":"NO\n");
  return 0;
}
