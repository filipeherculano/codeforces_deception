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
	//freopen("input.txt", "rt", stdin);
	//freopen("output.txt", "wt", stdout);
	ios_base::sync_with_stdio(0);
	int n, bill;
	cin >> n;
	bool ok = true;
	int v[4] = {0};
	REP(i, n){
		cin >> bill;
		if(bill == 25) v[1]++;
		else if(bill == 50){
			if(v[1]) {
				v[1]--;
				v[2]++;
			} else ok = false;
		} else{
			if(v[1] && v[2]){
				v[1]--;
				v[2]--;
				v[3]++;		
			} else if(v[1] >= 3){
				v[1] -= 3;
				v[3]++;
			} else ok = false;
		}
	}
	printf("%s", ok ? "YES\n":"NO\n");
  return 0;
}
