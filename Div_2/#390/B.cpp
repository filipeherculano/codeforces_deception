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
	//freopen("input.txt", "rt", stdin);
	//freopen("output.txt", "wt", stdout);
	string mat[4];
	REP(i,4) cin >> mat[i];
	for(int i = 0; i <= 3; i++){
		for(int j = 0; j <= 1; j++){
			int x = 0, o = 0;
			if(mat[i][j] == 'x') x++;
			else if(mat[i][j] == 'o') o++;

			if(mat[i][j+1] == 'x') x++;
			else if(mat[i][j+1] == 'o') o++;

			if(mat[i][j+2] == 'x') x++;
			else if(mat[i][j+2] == 'o') o++;

			if(x == 2 && o == 0){
				cout << "YES\n";
				return 0;
			}
		}
	}
	for(int i = 0; i <= 1; i++){
		for(int j = 0; j <= 3; j++){
			int x = 0, o = 0;
			if(mat[i][j] == 'x') x++;
			else if(mat[i][j] == 'o') o++;

			if(mat[i+1][j] == 'x') x++;
			else if(mat[i+1][j] == 'o') o++;

			if(mat[i+2][j] == 'x') x++;
			else if(mat[i+2][j] == 'o') o++;

			if(x == 2 && o == 0){
				cout << "YES\n";
				return 0;
			}
		}
	}
	for(int i = 0; i <= 1; i++){
		for(int j = 0; j <= 1; j++){
			int x = 0, o = 0;
			if(mat[i][j] == 'x') x++;
			else if(mat[i][j] == 'o') o++;

			if(mat[i+1][j+1] == 'x') x++;
			else if(mat[i+1][j+1] == 'o') o++;

			if(mat[i+2][j+2] == 'x') x++;
			else if(mat[i+2][j+2] == 'o') o++;

			if(x == 2 && o == 0){
				cout << "YES\n";
				return 0;
			}
			
		}
	}
	for(int i = 0; i <= 1; i++){
		for(int j = 2; j <= 3; j++){
			int x = 0, o = 0;
			if(mat[i][j] == 'x') x++;
			else if(mat[i][j] == 'o') o++;

			if(mat[i+1][j-1] == 'x') x++;
			else if(mat[i+1][j-1] == 'o') o++;

			if(mat[i+2][j-2] == 'x') x++;
			else if(mat[i+2][j-2] == 'o') o++;

			if(x == 2 && o == 0){
				cout << "YES\n";
				return 0;
			}
			
		}
	}
	cout << "NO\n";
  return 0;
}




