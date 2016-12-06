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
	bool ok = false;
	string line;
	getline(cin, line);
	REP(i, line.size()){
		if(line[i] == 'H' || line[i] == 'Q' || line[i] == '9')
			ok = true;
	}
	printf("%s", ok ? "YES\n":"NO\n");
  return 0;
}
