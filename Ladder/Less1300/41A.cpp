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
	bool ok = true;
	string a,b;
	cin >> a;
	cin >> b;
	int ia = 0, ib = b.size()-1;
	if(a.size() != b.size()) ok = false;
	while(ok && ib >= 0){
		if(a[ia] != b[ib]) ok = false;
		ia++;
		ib--;
	}
	printf("%s", ok ? "YES\n":"NO\n");
  return 0;
}
