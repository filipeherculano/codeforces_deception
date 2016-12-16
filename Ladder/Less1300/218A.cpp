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
	int n, m, hi = 0, lo = 0;
	cin >> n >> m;
	vector<int> t(m);
	REP(i, m) cin >> t[i];
	sort(all(t));
	vector<int> v(t), w(t);
	int i = 0, idx = m-1;
	while(i < n){
		hi += v[idx];
		if(v[idx]) {
			i++;
			v[idx]--;
		}
		if(idx){
			if(v[idx] < v[idx-1]) idx--;
			else if(v[m-1] >= v[idx-1]) idx = m-1;
		} else{
			if(v[idx] <= v[m-1]) idx = m-1;
		}
	}
	i = 0; idx = 0;
	while(i < n){
		lo += w[idx];
		if(w[idx]) {
			i++;
			w[idx]--;
		}
		if(w[idx] == 0) idx = (idx+1)%m;
	}
	printf("%d %d\n", hi, lo);
  return 0;
}
