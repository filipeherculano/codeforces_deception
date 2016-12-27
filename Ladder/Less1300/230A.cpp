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

bool cmp(pair<int,int> i, pair<int,int> j){
	if(i.first == j.first) return i.second >= j.second;
	return i.first < j.first;
}

int main(){
	int s, n, idx;
	cin >> s >> n;
	vector< pair<int,int> > v(n);
	REP(i, n) cin >> v[i].first >> v[i].second;
	sort(all(v), cmp);
	for(idx = 0; idx < n; idx++){ 
		if(v[idx].first >= s) break;
		s += v[idx].second;
	}
	if(idx == n) cout << "YES\n";
	else cout << "NO\n";
  return 0;
}
