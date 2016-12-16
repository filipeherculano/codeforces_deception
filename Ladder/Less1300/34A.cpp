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
	int n, a, b, diff = 0x3f3f3f3f;
	scanf("%d", &n);
	int v[n];
	REP(i, n) scanf("%d", &v[i]);
	REP(i, n){
		if(i == n-1){
			if(diff > abs(v[i]-v[0])){
				diff = abs(v[i]-v[0]);
				a = i+1;
				b = 1;
			}
		} else {
			if(diff > abs(v[i]-v[i+1])){
				diff = abs(v[i]-v[i+1]);
				a = i+1;
				b = i+2;
			}
		}
	}
	cout << a << " " << b << endl;
  return 0;
}
