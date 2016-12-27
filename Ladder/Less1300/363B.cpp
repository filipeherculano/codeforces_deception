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
	int n, k;
	cin >> n >> k;
	int v[n];
	REP(i, n) cin >> v[i];
	int j = 0, MIN = 0, temp;
	REP(i, k) MIN += v[i];
	temp = MIN;
	for(int i = j+1; i+k <= n; i++){
		temp -= v[i-1];
		temp += v[i+k-1];
		if(temp < MIN){
			j = i;
			MIN = temp;
		}
	}
	cout << j+1 << endl;
  return 0;
}
