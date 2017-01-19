#include <bits/stdc++.h>

#define FOR(i, a, n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define all(a) a.begin(),a.end()
#define pb push_back
#define LSOne(S) (S & (-S))
#define MAXN 6400040

typedef unsigned long long llu;
typedef long long ll;
typedef long double ld;

const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;

using namespace std;

int main(){
        //freopen("input.txt", "rt", stdin);
        //freopen("output.txt", "wt", stdout);
	int n,c, res = -1, t, num;
	scanf("%d %d", &n, &c);
	vector<int> v[n];
	int buck[c] = {0};
	int care = n-1;
	REP(i,n){
		scanf("%d", &t);
		REP(j,t){
			scanf("%d", &num);
			v[i].pb(num);
		}
	}
	REP(i,n-1){
		int idx = 0;
		while(idx < v[i].size() && idx < v[i+1].size() && v[i][idx] == v[i+1][idx]) idx++;
		if(idx < v[i].size() && idx < v[i+1].size()){
			int a = v[i][idx], b = v[i+1][idx];
			int l,r;
			if(a < b){
				l = 0; r = c-b;
				buck[l]++;
				if(r+1 < c) buck[r+1]--;
				if(a != 1){
					l = 1+abs(c-a); r = l + (abs(a-1)-1);
					buck[l]++;
					if(r+1 < c) buck[r+1]--;
				}
			} else {
				l = c-a+1; r = l+c-(b+l);
				buck[l]++;
				if(r+1 < c) buck[r+1]--;
			}
		} else {
			if(v[i].size() > v[i+1].size()){
				cout << "-1\n";
				return 0;
			}
			care--;
		}
	}
	int sum = 0;
	REP(i,c){
		sum += buck[i];
		if(sum == care){
			res = max(res,i);
			break;
		}
	}
	cout << res << endl;
	return 0;
}

