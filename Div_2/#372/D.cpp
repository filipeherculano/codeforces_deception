#include <bits/stdc++.h>

#define FOR(i, a, n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define all(a) a.begin(),a.end()
#define pb push_back
#define LSOne(S) (S & (-S))
#define MAXN 1010
#define MAXM 10010

typedef unsigned long long llu;
typedef long long ll;
typedef long double ld;

const ll INF = 1000000000000000000;
const double EPS = 1e-9;

using namespace std;

ll n, m, L, s, t, cur = 0;
vector<ll> vertex[MAXN], edge[MAXM], pre[MAXM], path;
ll dist[MAXN];
bool vis[MAXM];

void __dijkstra(){
	priority_queue< pair<ll,ll>, vector< pair<ll,ll> >, greater< pair<ll,ll> > > pq; // dist, vertex
	pq.push(make_pair(0,s));
	while(!pq.empty()){
		pair<ll,ll> front = pq.top();
		ll d = front.first, u = front.second;
		pq.pop();
		if(d > dist[u]) continue;
		REP(i, vertex[u].size()){
			pair<ll,ll> v = {edge[vertex[u][i]][2], (u == edge[vertex[u][i]][0] ? edge[vertex[u][i]][1]:edge[vertex[u][i]][0]) };
			if(edge[vertex[u][i]][2] == 0) v.first = 1;
			if(!vis[vertex[u][i]]){
				vis[vertex[u][i]] = true;
				if(dist[u] + v.first < dist[v.second]){
					dist[v.second] = dist[u] + v.first;
					pre[v.second] = vertex[u][i];
					pq.push(make_pair(dist[v.second], v.second));
				}
			}
		}
	}
}

void _dijkstra(){
	priority_queue< pair<ll,ll>, vector< pair<ll,ll> >, greater< pair<ll,ll> > > pq; // dist, vertex
	pq.push(make_pair(0,s));
	while(!pq.empty()){
		pair<ll,ll> front = pq.top();
		ll d = front.first, u = front.second;
		pq.pop();
		if(d > dist[u]) continue;
		REP(i, vertex[u].size()){
			pair<ll,ll> v = {edge[vertex[u][i]][2], (u == edge[vertex[u][i]][0] ? edge[vertex[u][i]][1]:edge[vertex[u][i]][0]) };
			if(!vis[vertex[u][i]]){
				vis[vertex[u][i]] = true;
				if(dist[u] + v.first < dist[v.second]){
					dist[v.second] = dist[u] + v.first;
					pq.push(make_pair(dist[v.second], v.second));
				}
			}
		}
	}
}

int main(){
	//freopen("input.txt", "rt", stdin);
	//freopen("output.txt", "wt", stdout);
	scanf("%lld %lld %lld %lld %lld", &n, &m, &L, &s, &t);
	REP(i,m){
		ll u, v, w;
		scanf("%lld %lld %lld", &u, &v, &w);
		vertex[u].pb(cur);
		vertex[v].pb(cur);
		edge[cur].pb(u); edge[cur].pb(v); edge[cur].pb(w);
		if(w == 0) vis[cur] = true;
		cur++;
	}
	for(ll i = 0; i < n; i++) dist[i] = INF;
	dist[s] = 0;
	_dijkstra();
	if(dist[t] < L){
		printf("NO\n");
		return 0;
	}
	if(dist[t] == L){
		printf("YES\n");
		REP(i,m) printf("%lld %lld %lld\n", edge[i][0], edge[i][1], (edge[i][2] == 0 ? INF:edge[i][2]));
		return 0;
	}
	REP(i,cur) vis[i] = false;
	for(ll i = 0; i < n; i++) dist[i] = INF;
	dist[s] = 0;
	__dijkstra();
	if(dist[t] > L){
		printf("NO\n");
		return 0;
	}
	printf("YES\n");
	backtrack(t,L,-1);
	/*ll idx = t, last;
	while(idx != s){
		if(edge[pre[idx]][2] == 0){
			last = pre[idx];
			edge[pre[idx]][2] = 1;
			L--;
		} else L -= edge[pre[idx]][2];
		idx = (idx == edge[pre[idx]][0] ? edge[pre[idx]][1]:edge[pre[idx]][0]);
	}
	edge[last][2] += L;*/
	REP(i,m) printf("%lld %lld %lld\n", edge[i][0], edge[i][1], (edge[i][2] == 0 ? INF:edge[i][2]));
	return 0;
}












