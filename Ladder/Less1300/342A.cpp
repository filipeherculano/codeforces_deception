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
	int v[10] = {0};
	REP(i, n) {
		cin >> aux;
		v[aux]++;
	}
	if((v[1]+v[2]+v[3]+v[4]+v[6]) == n && v[1] == (v[4]+v[6]) && v[1] == (v[2]+v[3]) && v[2] >= v[4]){
		while(v[4]){
			printf("1 2 4\n");
			v[1]--; v[2]--; v[4]--;
		}
		while(v[6] && v[2]){
			printf("1 2 6\n");
			v[1]--; v[2]--; v[6]--;
		}
		while(v[6] && v[3]){
			printf("1 3 6\n");
			v[1]--; v[3]--; v[6]--;
		}
	} else cout << "-1\n";
  return 0;
}
