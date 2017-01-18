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
	int n,m,d, res = INF;
	cin >> n >> m >> d;
	int v[n*m];
	REP(i, n*m) cin >> v[i];
	for(int i = 1; i < 10000; i++){
		bool ok = true;
		int temp = 0;
		for(int j = 0; j < n*m; j++){
			if(i != v[j]){
				temp += abs(i-v[j]);
				if(abs(i-v[j]) % d != 0) ok = false;	
			}
		}
		if(ok) res = min(res, temp/d);
	}
	if(res == INF) cout << "-1\n";
	else cout << res << endl;
	return 0;
}
