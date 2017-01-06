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
	int n;
	cin >> n;
	int v[n], ps[n];
	vector< pair<int,int> > vii;
	REP(i,n) {
		cin >> v[i];
		if(i) ps[i] = v[i]+ps[i-1];
		else ps[i] = v[i];
	}
	int l = 0, r = 0;
	while(r < n){
		int val = ps[r] - (l == 0 ? 0:ps[l-1]);
		while(val == 0 && r < n-1){
			r++;
			val = ps[r] - (l == 0 ? 0:ps[l-1]);
		}
		while(r != n-1 && v[r+1] == 0) r++;
		vii.pb(make_pair(l,r));
		l = r+1; r++;
	}
	REP(i,vii.size()){
		int val = ps[vii[i].second] - (vii[i].first == 0 ? 0:ps[vii[i].first-1]);
		if(val == 0){
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";
	cout << vii.size() << endl;
	REP(i,vii.size()){
		cout << vii[i].first+1 << " " << vii[i].second+1 << endl;
	}
  return 0;
}
