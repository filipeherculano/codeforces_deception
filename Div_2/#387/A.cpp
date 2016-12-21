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
	int n, diff = INF, a, b;
	cin >> n;
	for(int i = 1; i*i <= n; i++){
		for(int j = i; i*j <= n; j++){
			if(i*j == n && abs(i-j) < diff){
				diff = abs(i-j);
				a = i;
				b = j;
			}
		}
	}
	cout << a << " " << b << endl;
  return 0;
}
