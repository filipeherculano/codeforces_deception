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
	int n, best = 0, worst = 0x3f3f3f3f, aux, cnt = 0;
	scanf("%d", &n);
	REP(i, n){
		scanf("%d", &aux);
		if(i && best < aux) cnt++;
		else if(i && worst > aux) cnt++;
		best = max(best, aux);
		worst = min(worst, aux); 
	}
	cout << cnt << endl;
  return 0;
}
