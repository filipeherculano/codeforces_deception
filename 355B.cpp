#include <bits/stdc++.h>
#define FOR(i, n) for(int i = 0; i < n; i++)

typedef unsigned long long llu;
typedef long long ll;
typedef long double Lf;

using namespace std;

int main(){
	int c1, c2, c3, c4, n, m;
	cin >> c1 >> c2 >> c3 >> c4;
	cin >> n >> m;
	int v[n], w[m];
	int bus[3][n+1], troll[3][m+1];
	FOR(i, n) cin >> v[i];
	FOR(i, m) cin >> w[i];
	
	FOR(i, 3){
		int count = 0;
		FOR(j, n){
			if(i == 0){
				bus[i][j] = v[j]*c1;
				count += bus[i][j];
			} else if(i == 1){
				if(c2 < bus[i-1][j]) bus[i][j] = c2;
				else bus[i][j] = bus[i-1][j];
				count += bus[i][j];
			} else if(i == 2){
				if(c3 < bus[i-1][n]) bus[i][n] = c3;
				else bus[i][n] = bus[i-1][n];
			}
		}
		if(i != 2) bus[i][n] = count;
	}
	
	FOR(i, 3){
		int count = 0;
		FOR(j, m){
			if(i == 0){
				troll[i][j] = w[j]*c1;
				count += troll[i][j];
			} else if(i == 1){
				if(c2 < troll[i-1][j]) troll[i][j] = c2;
				else troll[i][j] = troll[i-1][j];
				count += troll[i][j];
			} else if(i == 2){
				if(c3 < troll[i-1][m]) troll[i][m] = c3;
				else troll[i][m] = troll[i-1][m];
			}
		}
		if(i != 2) troll[i][m] = count;
	}
	if(troll[2][m] + bus[2][n] > c4) cout << c4 << endl;
	else cout << troll[2][m] + bus[2][n] <<endl;
  return 0;
}
