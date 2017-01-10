#include <bits/stdc++.h>

#define FOR(i, a, n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define all(a) a.begin(),a.end()
#define pb push_back
#define LSOne(S) (S & (-S))
#define MAXN 200020

typedef unsigned long long llu;
typedef long long ll;
typedef long double ld;

const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;

using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	//freopen("output.txt", "wt", stdout);
	int n, m;
	cin >> n >> m;
	int mod = n;
	REP(i,m){
		int l, r;
		cin >> l >> r;
		mod = min(mod, (r-l)+1);
	}
	cout << mod << endl;
	REP(i, n) cout << i%mod << " ";
	cout << endl;
	return 0;
}





