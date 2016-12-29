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
	ios_base::sync_with_stdio(0);
	int n, t = -INF;
	vector<int> v(3);
	cin >> n >> v[0] >> v[1] >> v[2];
	sort(all(v));
	for(int x = 0; x*v[0] <= n; x++){
		for(int y = 0; (x*v[0])+(y*v[1]) <= n; y++){
			if((n - x*v[0] - y*v[1]) % v[2] == 0){
				int z = (n - x*v[0] - y*v[1]) / v[2];
				t = max(t, x+y+z);		
			}
		}
	}
	cout << t << endl;
	return 0;
}
