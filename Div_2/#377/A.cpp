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
	int k, r, i = 1;
	cin >> k >> r;
	k %= 10;
	while((((k*i)-r) % 10) && ((k*i) % 10)) {
		i++;
	}
	cout << i << endl;
  return 0;
}
