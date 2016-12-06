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
	int cnt = 0;
	vector<int> shoe(4);
	REP(i, 4) scanf("%d", &shoe[i]);
	sort(all(shoe));
	FOR(i, 1, 4)
		if(shoe[i] == shoe[i-1])
			cnt++;
	cout << cnt << endl;
  return 0;
}
