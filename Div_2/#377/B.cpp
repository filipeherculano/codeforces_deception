#include <bits/stdc++.h>

#define FOR(i, a, n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define all(a) a.begin(),a.end()
#define pb push_back

typedef unsigned long long llu;
typedef long long ll;
typedef long double ld;

using namespace std;

int main(){
	int n, k, cnt = 0;
	cin >> n >> k;
	int v[n], w[n-1];
	REP(i, n) cin >> v[i];
	REP(i, n-1){
		int total = v[i]+v[i+1];
		if(total < k) w[i] = k-total;
		else w[i] = 0;
	}
	REP(i, n-1){
		v[i+1] += w[i];
		cnt += w[i];
		if(i != n-2) {
			if(w[i+1] >= w[i]) w[i+1] -= w[i];
			else w[i+1] = 0;
		}
	}
	cout << cnt << endl;
	REP(i, n) printf("%d ", v[i]);
	cout << endl;
  return 0;
}
