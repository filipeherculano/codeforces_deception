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
	int idx = 0;
	string line;
	getline(cin, line);
	while(idx < line.size()){
		if(idx < line.size()-1 && line[idx] == '-' && line[idx+1] == '-') {cout << "2"; idx += 2;}
		else if(idx < line.size()-1 && line[idx] == '-' && line[idx+1] == '.') {cout << "1"; idx += 2;}
		else if(line[idx] == '.') {cout << "0"; idx++;}
	}
	cout << endl;
	return 0;
}
