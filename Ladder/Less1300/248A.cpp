#include <bits/stdc++.h>

#define FOR(i, a, n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define all(a) a.begin(),a.end()
#define pb push_back

typedef unsigned long long llu;
typedef long long ll;
typedef long double ld;

using namespace std;

int main(){
	int n, l = 0, r = 0; // count open
	scanf("%d", &n);
	REP(i, n){
		int a, b;
		scanf("%d %d", &a, &b);
		l += a; r += b;
	}
	int res = min((l)+abs(n-r), abs(n-l)+(r));
	res = min(min(res, abs(n-l)+abs(n-r)), l+r);
	cout << res << endl;
  return 0;
}
