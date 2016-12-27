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
	int n, m, aux, q;
	ll va = 0, p = 0;
	cin >> n;
	map<int,int> MAP;
	REP(i, n){
		cin >> aux;
		MAP.insert(make_pair(aux,i));
	}
	cin >> m;
	REP(i, m){
		cin >> q;
		ll check = (ll)MAP[q];
		va += check+1LL;
		p += n-check;
	}
	cout << va << " " << p << endl;
  return 0;
}
