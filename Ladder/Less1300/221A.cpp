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
	cin >> n;
	cout << n << " ";
	for(int i = 0; i < n-1; i++) cout << i+1 << " ";
	cout << endl;
  return 0;
}
