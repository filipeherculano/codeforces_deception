#include <bits/stdc++.h>

#define FOR(i, a, n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define all(a) a.begin(),a.end()
#define pb push_back

typedef unsigned long long llu;
typedef long long ll;
typedef long double ld;

using namespace std;

string sumOne(string line){
	int temp = stoi(line);
	temp++;
	return to_string(temp);
}

bool distinct(string line){
	bool ok = true;
	int v[27] = {0};
	REP(i, line.size()){
		if(v[line[i]-'0']) ok = false;
		v[line[i]-'0']++;
	}
	return ok;
}

int main(){
  	string line;
	getline(cin, line);
	line = sumOne(line);	
	while(!distinct(line)) line = sumOne(line);
	cout << line << endl;
	return 0;
}
