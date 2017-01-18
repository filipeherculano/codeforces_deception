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
	int n, s = 0, e = 0;
	cin >> n;
	vector<int> v(n);
	vector< pair<int,int> > res;
	REP(i,n) cin >> v[i];
	while(e < n-1){
		if(v[e] > v[e+1]) e++;
		else {
			if(abs(s-e) > 0) res.pb(make_pair(s,e));
			e++; s = e;
		}
		if(e == n-1 && abs(s-e) > 0) res.pb(make_pair(s,e));
	}
	if(res.size() == 1) {
		bool ok = true;
		for(int i = res[0].second+1; i < n; i++) {if(v[res[0].first] > v[i]) ok = false;}
		for(int i = res[0].first-1; i >= 0; i--) {if(v[res[0].second] < v[i]) ok = false;}
		if(ok) printf("yes\n%d %d\n", res[0].first+1, res[0].second+1);
		else printf("no\n");
	}
	else if(res.size() == 0) printf("yes\n1 1\n");
	else printf("no\n");
	return 0;
}
