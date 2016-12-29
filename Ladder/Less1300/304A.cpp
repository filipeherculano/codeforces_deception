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
	int n, cnt = 0;
	cin >> n;
	for(int a = 1; a <= n; a++){
		for(int b = a; b <= n; b++){
			int integer = (int)sqrt(a*a + b*b);
			if(fabs(sqrt(a*a + b*b) - (double)integer) < EPS){
				if((a*a + b*b) <= n*n) cnt++;
				else break;
			} 
		}
	}
	cout << cnt << endl;
  return 0;
}
