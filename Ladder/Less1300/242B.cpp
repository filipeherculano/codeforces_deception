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
	int n, idx, left = INF, right = -INF;
	cin >> n;
	int mat[n][2];
	REP(i, n){
		cin >> mat[i][0] >> mat[i][1];
		left = min(left, mat[i][0]);
		right = max(right, mat[i][1]);
	}
	REP(i, n){
		if(mat[i][0] <= left && right <= mat[i][1]){
			cout << i+1 << endl;
			return 0;
		}
	}
	cout << "-1\n";
  return 0;
}
