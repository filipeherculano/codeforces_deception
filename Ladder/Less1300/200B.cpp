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
	int n, sum = 0, aux;
	scanf("%d", &n);
	REP(i, n){
		scanf("%d", &aux);
		sum += aux;
	}
	printf("%.12Lf\n", (long double) sum / (long double) n);
  return 0;
}
