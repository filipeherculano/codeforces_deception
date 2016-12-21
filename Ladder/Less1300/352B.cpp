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
	int n, aux;
	cin >> n;
	map<int, vector<int> > idx;
	map<int, vector<int> >::iterator it;
	vector< pair<int,int> > res;
	REP(i, n) {
		cin >> aux;
		it = idx.find(aux);
		if(it == idx.end()){
			vector<int> temp; temp.pb(i);
			idx.insert(make_pair(aux, temp));
		} else it->second.pb(i);
	}
	for(pair<int, vector<int> > obj : idx){
		bool ok = true;
		int r = 0;
		if(obj.second.size() > 1) r = obj.second[1]-obj.second[0];
		FOR(i, 1, obj.second.size()){
			if(obj.second[i]-obj.second[i-1] != r)
				ok = false;
		}
		if(ok) res.pb(make_pair(obj.first, r));
	}
	cout << res.size() << endl;
	REP(i, res.size()){
		cout << res[i].first << " " << res[i].second << endl;
	}
  return 0;
}
