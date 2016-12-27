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

bool cmp(int a, int b){ return a >= b;}

int main(){
	int k, cnt = 0, sum = 0, idx = 0;
	cin >> k;
	vector<int> a(12);
	REP(i, 12) cin >> a[i];
	sort(all(a), cmp);
	while(sum < k && idx < 12){
		sum += a[idx];
		idx++;
		cnt++;
	}
	if(sum >= k) cout << cnt << endl;
	else cout << "-1\n";
  return 0;
}
