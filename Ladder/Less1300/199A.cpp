#include <bits/stdc++.h>

#define FOR(i, a, n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define all(a) a.begin(),a.end()
#define pb push_back

typedef unsigned long long llu;
typedef long long ll;
typedef long double ld;

using namespace std;

int bs(int h, int t, int value, vector<int> fib){
	int b;
	while(h <= t){
		b = (h+t)/2;
		if(fib[b] == value) return b;
		else if(fib[b] > value) t = b-1;
		else h = b+1;
	}
	return -1;
}

int main(){
	int n;
	cin >> n;
	vector<int> fib; fib.pb(0); fib.pb(1);
	while(fib[fib.size()-1]+fib[fib.size()-2] < 1000000000) fib.pb(fib[fib.size()-1]+fib[fib.size()-2]);
	cout << fib.size() << endl;
	if(n == 0) cout << "0 0 0\n";
	else if(n == 1) cout << "0 0 1\n";
	else{
		int idx = bs(3, fib.size()-1, n, fib);
		printf("%d %d %d\n", fib[idx-3], fib[idx-2], fib[idx-2]);	
	}  
	return 0;
}
