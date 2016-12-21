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
	int n, start;
	string line;
	deque<char> res;
	scanf("%d%*c", &n);
	getline(cin, line);
	if(n&1) start = 1;
	else start = 0;
	res.pb(line[0]);
	FOR(i, 1, n){
		if(start == 0) res.pb(line[i]);
		else res.push_front(line[i]);
		start ^= 1;
	}
	while(!res.empty()){
		cout << res.front();
		res.pop_front();
	}
	cout << endl;
  return 0;
}
