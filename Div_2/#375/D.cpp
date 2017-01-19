#include <bits/stdc++.h>

#define FOR(i, a, n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define all(a) a.begin(),a.end()
#define pb push_back
#define LSOne(S) (S & (-S))
#define MAXN 6400040

typedef unsigned long long llu;
typedef long long ll;
typedef long double ld;

const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;

using namespace std;

int n,m,k;
int dx[] = {-1,0,0,1}, dy[] = {0, -1, 1, 0};
int vis[100][100], num[100][100];
string mat[100];

bool valid(int i, int j){
	return (i >= 0) && (i < n) && (j >= 0) && (j < m);
}

int backtrack(int i, int j, int val){
	int res = 1;
	vis[i][j] = 1;
	num[i][j] = val;
	REP(d, 4){
		if(valid(i+dx[d], j+dy[d]) && mat[i+dx[d]][j+dy[d]] == '.' && !vis[i+dx[d]][j+dy[d]]){
			res += backtrack(i+dx[d], j+dy[d], val);
		}
	}
	return res;
}

int main(){
        //freopen("input.txt", "rt", stdin);
        //freopen("output.txt", "wt", stdout);
	int cur = 1, cnt = 0;
	vector< pair<int,int> > vii;
	scanf("%d %d %d%*c", &n, &m, &k);
	REP(i,n) cin >> mat[i];
	REP(i,n) REP(j,m) if(mat[i][j] == '.' && (i == 0 || j == 0 || i == n-1 || j == m-1)) backtrack(i,j,-1);
	REP(i,n) REP(j,m) if(mat[i][j] == '.' && !vis[i][j]) {
		int res = backtrack(i,j,cur);
		if(res > 0) vii.pb(make_pair(res, cur++));
	}
	sort(all(vii));
	for(int d = 0; d < vii.size()-k; d++){
		REP(i,n) REP(j,m) if(num[i][j] == vii[d].second) mat[i][j] = '*', cnt++;
	}
	cout << cnt << endl;
	REP(i,n){
		REP(j,m) cout << mat[i][j];
		cout << endl;
	}
	return 0;
}
