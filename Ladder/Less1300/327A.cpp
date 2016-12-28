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

int HowMany(int l, int r, const vector<int> v){
	return v[r] - (l == 0 ? 0:v[l-1]);
}

int main(){
	//freopen("input.txt", "rt", stdin);
	//freopen("output.txt", "wt", stdout);
	ios_base::sync_with_stdio(0);
	int n, t = -INF;
	cin >> n;
	int v[n], res = 0;
	vector<int> zero(n, 0), one(n, 0);
	REP(i, n) {
		cin >> v[i];
		if(i){
			zero[i] = zero[i-1];
			one[i] = one[i-1];
			if(v[i]) one[i]++;
			else zero[i]++;
		} else {
			if(v[i]) one[i]++;
			else zero[i]++;
		}
	}
	for(int len = 1; len <= n; len++)
		for(int start = 0; start+len <= n; start++)
			t = max(t, one[n-1] +
			HowMany(start, start+len-1, zero) - 
			HowMany(start, start+len-1, one));
	cout << t << endl;
  return 0;
}
