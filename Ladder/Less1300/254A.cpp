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
	freopen("input.txt", "rt", stdin);
	freopen("output.txt", "wt", stdout);
	ios_base::sync_with_stdio(0);
	int n, num;
	bool ok = true;
	cin >> n;
	map<int, vector<int> > mapa;
	map<int, vector<int> >::iterator it;
	REP(i, 2*n){
		cin >> num;
		it = mapa.find(num);
		if(it == mapa.end()){
			vector<int> temp; temp.pb(i);
			mapa.insert(make_pair(num, temp));
		} else it->second.pb(i);
	}
	for(pair<int, vector<int> > obj : mapa){
		if(obj.second.size()&1)
			ok = false;
	}
	if(ok){
		for(pair<int, vector<int> > obj : mapa){
			REP(i, obj.second.size()){
				cout << obj.second[i]+1 << " " << obj.second[i+1] + 1 << endl;
				i++;
			}
		}
	} else cout << "-1\n";
  return 0;
}
