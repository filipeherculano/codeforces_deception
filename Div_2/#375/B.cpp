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
	int n, numUnd = 0, Max = 0, ini;
	bool open = false;
	string line, parse;
	stringstream ss;
	vector<string> vs;
	scanf("%d%*c", &n);
	getline(cin, line);
	REP(i, line.size()){
		if(line[i] == '_') parse.pb(' ');
		else if(line[i] == '(' || line[i] == ')') {
			parse.pb(' ');
			parse.pb(line[i]);
			parse.pb(' ');
		} else parse.pb(line[i]);
	}
	ss << parse;
	while(ss >> line){
		if(line[0] == '(') open = true;
		
		if(open) {
			if(line[0] == '(') line.erase(0, 1);
			if(line[line.size()-1] == ')'){
				open = false;	
				line.erase(line.size()-1, 1);
			}
			
			if(line.size() > 0) vs.pb(line);
		}else Max = max(Max, (int)line.size());
	}
	cout << Max << " " << vs.size() << endl;
  return 0;
}
