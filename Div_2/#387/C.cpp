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
	int n, q;
	cin >> n >> q;
	int occ[n];
	REP(i, n) occ[i] = 0;
	int t, k, d;
	REP(i, q){
		int cnt = 0, idxSum = 0;
		cin >> t >> k >> d;
		REP(j, n) if(occ[j] < t) cnt++;
		if(cnt >= k){
			for(int j = 0; j < n && k; j++){
				if(occ[j] < t){
					occ[j] = t+d-1;
					idxSum += j+1;
					k--;
				}			
			}
			cout << idxSum << endl;
		} else cout << "-1" << endl;
	}
  return 0;
}
