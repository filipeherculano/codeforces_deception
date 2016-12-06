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
	int w[5], cnt = 0;
	REP(i, 5) scanf("%d", &w[i]);
	for(int i = 1; i <= w[4]; i++){
		bool res = true;
		REP(j, 4) res &= (i%w[j]) == 0 ? false:true;
		if(res) cnt++;
	}
	cout << w[4]-cnt << endl;
  return 0;
}
