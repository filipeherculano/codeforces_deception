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
	int n, M = 0, m = 1000, pos1, pos2;
	scanf("%d", &n);
	int v[n];
	REP(i, n){
		scanf("%d", &v[i]);
		if(v[i] > M){
			M = v[i];
			pos1 = i;
		} 
		if(v[i] <= m){
			m = v[i];
			pos2 = i;
		}
	}
	int res = pos1;
	if(pos1 > pos2) pos2++;
	res += abs(n-pos2-1);
	cout << res << endl; 
  return 0;
}
