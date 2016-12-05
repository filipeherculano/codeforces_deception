#include <bits/stdc++.h>

#define FOR(i, a, n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define all(a) a.begin(),a.end()
#define pb push_back

typedef unsigned long long llu;
typedef long long ll;
typedef long double ld;

using namespace std;

int bs(vector<llu> v, llu n){
	int h = 0, t = v.size()-1, b;
	while(h <= t){
		b = (h+t)/2;
		if(v[b] > n && v[b-1] <= n) return b;
		else if(v[b] > n) t = b-1;
		else h = b+1;
	}
	return -1;
}

int main(){
	llu n;
	scanf("%llu", &n);
	if(n <= 2) printf("1\n");
	else{
		vector<llu> v; v.pb(1); v.pb(1);
		while(v.back() <= 10e18){
			v.pb(v[v.size()-1]+v[v.size()-2]);
		}
		v.pb(v[v.size()-1]+v[v.size()-2]);
		printf("%d\n", bs(v, n)-2);
	}
  return 0;
}
