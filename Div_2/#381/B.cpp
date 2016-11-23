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
	int n, m, total = 0;
	scanf("%d %d", &n, &m);
	int v[n];
	REP(i, n) scanf("%d", &v[i]);
	REP(j, m){
		int a, b, cnt = 0;
		scanf("%d %d", &a, &b); a--; b--;
		for(int i = a; i <= b; i++) cnt += v[i];
		total = max(total, total+cnt);
	}
	cout << total << endl;
  return 0;
}
