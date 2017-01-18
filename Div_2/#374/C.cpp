#include <bits/stdc++.h>

#define FOR(i, a, n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define all(a) a.begin(),a.end()
#define pb push_back
#define LSOne(S) (S & (-S))
#define MAXN 5005

typedef unsigned long long llu;
typedef long long ll;
typedef long double ld;

const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;

using namespace std;

int n, m, t;
int dp[MAXN][MAXN][2];
vector<int> adj[MAXN], wadj[MAXN];
vector<int> path;

int calc(int i, int j){
	if(j <= 0) return INF;
	if(dp[i][j][0] != -1) return dp[i][j][0];

	dp[i][j][0] = INF;
	REP(z, adj[i].size()){
		ll aux = calc(adj[i][z], j-1) + wadj[i][z];
		if(dp[i][j][0] > aux && t >= aux){
			dp[i][j][0] = aux;
			dp[i][j][1] = adj[i][z];
		}
	}
	return dp[i][j][0];
}

void findPath(int i, int j){
	path.pb(i);
	if(i == 1) return;
	findPath(dp[i][j][1], j-1);
}

int main(){
	//freopen("input.txt", "rt", stdin);
	//freopen("output.txt", "wt", stdout);
	cin >> n >> m >> t;
	REP(i,m){
		int u, v, t;
		cin >> u >> v >> t;
		adj[v].pb(u);
		wadj[v].pb(t);
	}
	REP(i,n+1) REP(j,n+1) dp[i][j][0] = -1;
	dp[1][1][0] = 0;
	for(int i = 1; i <= n; i++)
		for(int j = n; j >= 1; j--)
			calc(i, j);
	int lin = n, col = n;
	while(col >= 1 && dp[lin][col][1] == 0) col--;
	findPath(lin, col);	
	cout << path.size() << endl;
	for(int i = path.size()-1; i >= 0; i--) cout << path[i] << " ";
	cout << endl;	
	return 0;
}





