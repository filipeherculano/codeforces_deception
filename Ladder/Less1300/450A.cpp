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
	int n, m, big = 0, idx;
	scanf("%d %d", &n, &m);
	int v[n];
	REP(i, n){
		scanf("%d", &v[i]);
		v[i] = (v[i] - 1) / m;
		if(big <= v[i]) {
			big = v[i];
			idx = i+1;
		}
	}
	cout << idx << endl;
  return 0;
}
