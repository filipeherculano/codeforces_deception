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
	ios_base::sync_with_stdio(0);
	int n, m, aux;
	cin >> n >> m;
	set<int> numbers;
	map<int,int> last;
	int a[n], dp[n], res[n];
	REP(i,n){
		cin >> a[i];
		numbers.insert(a[i]);
	}
	for(int i = n-1; i >= 0; i--){
		if(last.find(a[i]) == last.end()) dp[i] = INF;
		else dp[i] = last[a[i]];
		last[a[i]] = i;
	}
	REP(i,n){
		if(i){
			if(dp[i-1] == INF) res[i] = res[i-1]-1;
			else res[i] = res[i-1];
		}
		else res[i] = numbers.size();
	}
	REP(i,m){
		int idx;
		cin >> idx; idx--;
		cout << res[idx] << endl;
	}
  return 0;
}




