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
	int zero = -1, one = -1;
	string bit;
	cin >> bit;
	REP(i, bit.size()) {
		if(bit[i] == '0' && zero == -1) zero = i;
		if(bit[i] == '1' && one == -1) one = i; 
	}
	if(zero != -1) bit.erase(bit.begin()+zero);
	else bit.erase(bit.begin()+one);
	cout << bit << endl;
  return 0;
}
