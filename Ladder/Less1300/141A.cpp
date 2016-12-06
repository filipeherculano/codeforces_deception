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
	int v[27] = {0};
	string f, s, p;
	getline(cin, f);
	getline(cin, s);
	getline(cin, p);
	REP(i, f.size()) v[f[i]-'A']++;
	REP(i, s.size()) v[s[i]-'A']++;
	REP(i, p.size()) v[p[i]-'A']--;
	REP(i, 27){
		if(v[i] != 0){
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";
  return 0;
}
