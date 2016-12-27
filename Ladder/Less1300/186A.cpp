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
	int miss = 0;
	string a, b;
	getline(cin, a);
	getline(cin, b);
	if(a.size() != b.size()) cout << "NO\n";
	else{
		REP(i, a.size())
			if(a[i] != b[i])
				miss++;
		if(miss > 2) cout << "NO\n";
		else{
			sort(all(a));
			sort(all(b));
			if(a == b) cout << "YES\n";
			else cout << "NO\n";
		}
	}
  return 0;
}
