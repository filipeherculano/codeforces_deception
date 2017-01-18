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
	ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	int a[n], cnt = 0, med = 0, h = 0, t = n-1;
	unordered_map<int,int> mapa;
	REP(i,n) cin >> a[i], med += a[i];
	med /= n;
	REP(i,n) mapa[med-a[i]]++;
	for(pair<int,int> obj : mapa){
		cout << obj.first << endl;
	}
	return 0;
}
