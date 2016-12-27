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
	ios_base::sync_with_stdio(0);
	int n, aux;
	cin >> n;
	int v[3] = {0};
	REP(i, n){
		cin >> aux;
		aux /= 100;
		v[aux]++;
	}
	if(v[1]&1 || (v[1] == 0 && v[2]&1)) cout << "NO\n";
	else cout << "YES\n";
  return 0;
}
