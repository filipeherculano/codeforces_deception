#include <bits/stdc++.h>

#define FOR(i, a, n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define all(a) a.begin(),a.end()
#define pb push_back
#define LSOne(S) (S & (-S))
#define MAXN 110

typedef unsigned long long llu;
typedef long long ll;
typedef long double ld;

const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;

using namespace std;

int n;
int p[MAXN], cycle[MAXN], visited[MAXN], cnt = 0;

int dfs(int i, int initial){
	if(visited[i]) {
		if(i == initial) return cnt;
		return -1;
	}

	visited[i] = 1;
	cnt++;
	int res = dfs(p[i], initial);
	cnt--;
	visited[i] = 0;
	return res;
}

int gcd(int a, int b){
	return b == 0 ? a:gcd(b, a%b);
}

int lcm(int a, int b){
	if(b > a) swap(a,b);
	int temp = gcd(a,b);
	return temp ? (a / temp * b):0;	
}

int main(){
	//freopen("input.txt", "rt", stdin);
	//freopen("output.txt", "wt", stdout);
	cin >> n; 
	int res = 1;
	for(int i = 1; i <= n; i++) cin >> p[i];
	for(int i = 1; i <= n; i++) {
		cycle[i] = dfs(i, i);
		if(cycle[i]%2 == 0) cycle[i] /= 2;
	}
	for(int i = 1; i <= n; i++){
		res = lcm(res, cycle[i]);
		if(cycle[i] == -1) {
			cout << "-1\n";
			return 0;
		}
	}
	cout << res << endl;
	return 0;
}





