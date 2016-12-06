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
	int n;
	scanf("%d", &n);
	if(n&1) printf("-1\n");
	else{
		int curr = 2, idx = 0;
		while(idx < n){
			printf("%d %d ", curr, curr-1);
			curr+=2;
			idx+=2;
		}
		cout << endl;
	}
  return 0;
}
