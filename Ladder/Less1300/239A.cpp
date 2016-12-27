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
	ios_base::sync_with_stdio(0);
	int y, k, n;
	cin >> y >> k >> n;
	bool found = false;
	for(int x = (k*(1+(y/k))) - y; x + y <= n; x += k){
		cout << x << " ";
		found = true;
	}
	if(found == false) cout << "-1";
	cout << endl;  
	return 0;
}
