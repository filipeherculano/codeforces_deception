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
	int dist = 400;
	vector<int> x(3);
	cin >> x[0] >> x[1] >> x[2];
	sort(all(x));
	for(int i = x[0]; i <= x[2]; i++){
		int temp = 0;
		REP(j, 3) temp += abs(x[j] - i);
		dist = min(dist, temp);
	}
	cout << dist << endl;
  return 0;
}
