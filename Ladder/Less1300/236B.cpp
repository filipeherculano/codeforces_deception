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
	int a,b,c;
	ll sum = 0;
	cin >> a >> b >> c;
	int sz = (a*b*c)+2;
	int v[1000005] = {0};
	FOR(i, 1, sz) {
		int jump = 1;
		while(jump*i < sz) v[jump*i]++, jump++;
	}
	for(int i = 1; i <= a ;i++)
		for(int j = 1; j <= b ; j++)
			for(int z = 1; z <= c; z++)
				sum += v[i*j*z] % (1 << 30);
	cout << sum << endl;
  return 0;
}



