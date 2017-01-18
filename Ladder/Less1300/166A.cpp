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
	if(i.first == j.first) return i.second <= j.second;
	return i.first >= j.first;
}

int main(){
	//freopen("input.txt", "rt", stdin);
	//freopen("output.txt", "wt", stdout);
	//ios_base::sync_with_stdio(0);
	int n, k;
	cin >> n >> k;
	vector< pair<int,int> > mat;
	REP(i, n){
		int a, b;
		cin >> a >> b;
		mat.pb(make_pair(a,b));
	}
	sort(all(mat), cmp);
	int hi = k-1, lo = k-1;
	while(hi > 0 && mat[hi].first == mat[hi-1].first && mat[hi].second == mat[hi-1].second) hi--;
	while(lo < n-1 && mat[lo].first == mat[lo+1].first && mat[lo].second == mat[lo+1].second) lo++;
	cout << abs(hi-lo)+1 << endl;
	return 0;
}
