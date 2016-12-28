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
	freopen("input.txt", "rt", stdin);
	freopen("output.txt", "wt", stdout);
	ios_base::sync_with_stdio(0);
	int n, m;
	cin >> n >> m;
	while(n || m){
		if(m){
			cout << "G";
			m--;
		}
		if(n) {
			cout << "B";
			n--;
		}
	}
	cout << endl;
	return 0;
}
