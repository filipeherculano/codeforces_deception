#include <bits/stdc++.h>
#define FOR(i, a, n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define pb push_back

typedef unsigned long long llu;
typedef long long ll;
typedef long double ld;

using namespace std;

int main(){
	string line;
	int n, count = 0;
	scanf("%d%*c", &n);
	int v[n] = {0};
	cin >> line;
	REP(i, line.size()) if(line[i] == 'B') v[i] = 1;
	FOR(i, 1, n){
		if(v[i-1] && v[i]) {
			v[i] += v[i-1];
			v[i-1] = 0;	
		}
	}
	REP(i, n) if(v[i]) count++;
	cout << count << endl;
	REP(i, n) if(v[i]) cout << v[i] << " ";
	cout << endl;
  return 0;
}
