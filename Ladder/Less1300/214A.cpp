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
	int n, m, cnt = 0;
	cin >> n >> m;
	for(int a = 0; a <= 1000; a++)
		for(int b = 0; b <= 1000; b++)
			if(((a*a) + b) == n && (a + (b*b)) == m)
				cnt++;
	cout << cnt << endl;
  return 0;
}
