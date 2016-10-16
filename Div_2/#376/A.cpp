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
	string line;
	int pos = 0, moves = 0;
	getline(cin, line);
	REP(i, line.size()){
		moves += min(abs((line[i]-'a')-pos), abs(26-abs((line[i]-'a')-pos)));
		pos = line[i]-'a';
	}
	cout << moves << endl;
  return 0;
}
