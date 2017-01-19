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

int main(){
	//freopen("input.txt", "rt", stdin);
	//freopen("output.txt", "wt", stdout);
	int n, k, a, b;
	string res;
	scanf("%d %d %d %d", &n, &k, &a, &b);
	if(a == 0 ^ b == 0){	
		if(k >= max(a,b)){
			if(b == max(a,b)) REP(i,n) cout << 'B';
			if(a == max(a,b)) REP(i,n) cout << 'G';
		} else cout << "NO\n";
	} else {
		while((max(a,b) / min(a,b)) > k || (max(a,b) % min(a,b)) > k){
			if(a == max(a,b)){
				REP(i,k) res.pb('G');
				res.pb('B');
				a -= k; b--;
			} else {
				REP(i,k) res.pb('B');
				res.pb('G');
				b -= k; a--;
			}
			if(a == 0 ^ b == 0){	
				if(k >= max(a,b)){
					if(b == max(a,b)) REP(i,b) res.pb('B');
					if(a == max(a,b)) REP(i,a) res.pb('G');
				} else {
					cout << "NO\n";
					return 0;
				}
				break;
			}
		}
		cout << res;
		if(max(a,b) == b){
			REP(i, min(a,b)){
				REP(j,(max(a,b) / min(a,b))) cout << 'B';
				cout << 'G';
			}
			REP(i, (max(a,b) % min(a,b))) cout << 'B';
		} else {
			REP(i, min(a,b)){
				REP(j,(max(a,b) / min(a,b))) cout << 'G';
				cout << 'B';
			}
			REP(i, (max(a,b) % min(a,b))) cout << 'G';
		}
		cout << endl;
	}
	return 0;
}


