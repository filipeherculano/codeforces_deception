#include <bits/stdc++.h>

#define FOR(i, a, n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define all(a) a.begin(),a.end()
#define pb push_back
#define LSOne(S) (S & (-S))
#define MAXN 200020

typedef unsigned long long llu;
typedef long long ll;
typedef long double ld;

const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;

using namespace std;

int n, m, k, cnt = 0, same = 0, tot = 0;
vector<int> adj[MAXN];
vector<int> visited(MAXN);
vector<int> cor(MAXN);
unordered_map<int,int> counter;

void dfs(int i){
        visited[i] = 1;
        counter[cor[i]]++;
        same = max(same, counter[cor[i]]);
        tot++;
        REP(j, adj[i].size())
                if(!visited[adj[i][j]])
                  dfs(adj[i][j]);
}

int main(){
        //freopen("input.txt", "rt", stdin);
        //freopen("output.txt", "wt", stdout);
        cin >> n >> m >> k;
        REP(i,n) cin >> cor[i+1];
        REP(i,m){
                int a, b;
                cin >> a >> b;
                adj[a].pb(b);
                adj[b].pb(a);
        }
        for(int i = 1; i <= n; i++){
                if(!visited[i] && !adj[i].empty()) {
                	counter.clear();
                  dfs(i);
                  cnt += tot-same;
                  tot = 0; same = 0;
                }
        }
        cout << cnt << endl;
        return 0;
}
