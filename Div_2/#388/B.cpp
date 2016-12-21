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
	set< pair<int,int> > sii;
	vector< pair<int,int> > v(3);
	REP(i, 3){
		cin >> v[i].first >> v[i].second;
	}
	sii.insert(make_pair(v[0].first + (v[1].first-v[2].first), v[0].second + (v[1].second-v[2].second)));
	sii.insert(make_pair(v[0].first + (v[2].first-v[1].first), v[0].second + (v[2].second-v[1].second)));

	sii.insert(make_pair(v[1].first + (v[0].first-v[2].first), v[1].second + (v[0].second-v[2].second)));
	sii.insert(make_pair(v[1].first + (v[2].first-v[0].first), v[1].second + (v[2].second-v[0].second)));

	sii.insert(make_pair(v[2].first + (v[0].first-v[1].first), v[2].second + (v[0].second-v[1].second)));
	sii.insert(make_pair(v[2].first + (v[1].first-v[0].first), v[2].second + (v[1].second-v[0].second)));
	
	cout << sii.size() << endl;
	for(set< pair<int,int> >::iterator it = sii.begin(); it != sii.end(); it++){
		cout << it->first << " " << it->second << endl;
	}
  return 0;
}
