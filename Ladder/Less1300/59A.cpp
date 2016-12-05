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
	int u = 0, l = 0;
  	string line;
	getline(cin, line);
	REP(i, line.size()){
		if(isupper(line[i])) u++;
		else l++;
	}
	if(l >= u){
		REP(i, line.size())
			line[i] = tolower(line[i]);
	} else {
		REP(i, line.size())
			line[i] = toupper(line[i]);
	}
	cout << line << endl;
	return 0;
}
