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
	bool ok = true;
	int n;
	cin >> n;
	int v[n];
	REP(i, n) cin >> v[i];
	REP(i, n-1){
		if(v[i] < 0) break;
		if(v[i]&1){
			v[i]--;
			v[i+1]--;
		} 
		if(!(v[i]&1)) v[i] = 0;
	}
	if(!(v[n-1]&1)) v[n-1] = 0;
	REP(i, n){
		if(v[i] != 0){
			ok = false;
			break;
		}
	}
	printf("%s", ok ? "YES\n":"NO\n");
  return 0;
}






