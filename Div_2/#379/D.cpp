#include <bits/stdc++.h>

#define FOR(i, a, n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define all(a) a.begin(),a.end()
#define pb push_back
#define LSOne(S) (S & (-S))
#define MAXN 100010

typedef unsigned long long llu;
typedef long long ll;
typedef long double ld;

const int INF = 2000000001;
const double EPS = 1e-9;

using namespace std;

int n,x,y;
int close[8];
char piece[8];

int main(){
	//freopen("input.txt", "rt", stdin);
	//freopen("output.txt", "wt", stdout);
	scanf("%d %d %d%*c", &n, &x, &y);
	REP(i,8) close[i] = INF, piece[i] = 'Z';
	REP(i,n){
		char c;
		int a,b;
		scanf("%c %d %d", &c, &a, &b);
		scanf("%*c");
		if(x == a){
			if(y < b){
				if(abs(y-b) < close[2]){
					close[2] = abs(y-b);
					piece[2] = c;
				}
			} else {
				if(abs(y-b) < close[3]){
					close[3] = abs(y-b);
					piece[3] = c;
				}
			}
		} else if(y == b){
			if(x < a){
				if(abs(x-a) < close[1]){
					close[1] = abs(x-a);
					piece[1] = c;
				}
			} else {
				if(abs(x-a) < close[0]){
					close[0] = abs(x-a);
					piece[0] = c;
				}
			}
		} else if(abs(a-x) == abs(b-y)){
			if(x > a && y < b){
				if(abs(a-x) < close[4]){
					close[4] = abs(a-x);
					piece[4] = c;
				}
			} else if(x < a && y < b){
				if(abs(a-x) < close[5]){
					close[5] = abs(a-x);
					piece[5] = c;
				}
			} else if(x < a && y > b){
				if(abs(a-x) < close[6]){
					close[6] = abs(a-x);
					piece[6] = c;
				}
			} else if(x > a && y > b){
				if(abs(a-x) < close[7]){
					close[7] = abs(a-x);
					piece[7] = c;
				}
			}
		}
	}
	REP(i,8){
		if(i < 4 && (piece[i] == 'R' || piece[i] == 'Q')){
			cout << "YES\n";
			return 0;
		} else if(i >= 4 && (piece[i] == 'Q' || piece[i] == 'B')){
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO\n";
	return 0;
}


