#include <bits/stdc++.h>
#define FOR(i, n) for(int i = 0; i < n; i++)

typedef unsigned long long llu;
typedef long long ll;
typedef long double Lf;

using namespace std;

int main(){
	int k, d;
	cin >> k >> d;
	if(d == 0 && k > 1) printf("No solution\n");
	else {
		printf("%d", d);
		for(int i = 0; i < k-1; i++) printf("0");
		cout << endl;
  }
  return 0;
}
