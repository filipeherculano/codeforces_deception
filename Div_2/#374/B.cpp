#include <bits/stdc++.h>
#define FOR(i, a, n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define pb push_back

typedef unsigned long long llu;
typedef long long ll;
typedef long double ld;

using namespace std;

int main(){
	int n, k, start = -1, end = -1, worst, best, psize;
	string line, pass;
	vector<int> vs;
	scanf("%d %d%*c", &n, &k);
	REP(i, n) {
		getline(cin, line);
		vs.pb(line.size());
	}
	getline(cin, pass);
	psize = pass.size();
	sort(vs.begin(), vs.end());
	REP(i, n){
		if(psize == vs[i] && start == -1) start = i+1;
		if(psize >= vs[i]) end = i+1;
	}
	best = start + (5*((start-1)/k));
	worst = end + (5*((end-1)/k));
	cout << best << " " << worst << endl;
  return 0;
}
