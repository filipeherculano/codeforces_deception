#include <bits/stdc++.h>

#define FOR(i, a, n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define all(a) a.begin(),a.end()
#define pb push_back

typedef unsigned long long llu;
typedef long long ll;
typedef long double ld;

using namespace std;

int main(){
	int k;
	string line;
	int v[26] = {0};
	scanf("%d%*c", &k);
	getline(cin, line);
	REP(i, line.size()) v[line[i]-'a']++;
	if(k == 1) cout << line << endl;
	else{
		bool ok = true;
		REP(i, 26)
			if(v[i] % k != 0)
				ok = false;

		if(ok) {
			string res;
			REP(i, 26)
				REP(j, v[i]/k)
					res.pb(i+'a');
				
			REP(i, k) cout << res;
			cout << endl;
		} else cout << "-1\n";
	}
  return 0;
}
