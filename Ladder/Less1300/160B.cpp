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
	//freopen("input.txt", "rt", stdin);
	//freopen("output.txt", "wt", stdout);
	int n;
	scanf("%d%*c", &n);
	string line;
	getline(cin,line);
	int i = 0, j = n, f = 0, s = 0;
	bool great = true, less = true;
	sort(line.begin(), line.begin()+n);
	sort(line.begin()+n, line.end());
	while(i < n){
		if(line[i]-'0' <= line[j]-'0') great = false;
		if(line[i]-'0' >= line[j]-'0') less = false;
		f += line[i]-'0';
		s += line[j]-'0';
		i++;
		j++;
	}
	if(great || less) {
		cout << "YES\n";
		return 0;
	}
	cout << "NO\n";
	return 0;
}
