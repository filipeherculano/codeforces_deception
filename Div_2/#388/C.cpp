#include <bits/stdc++.h>

#define FOR(i, a, n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define all(a) a.begin(),a.end()
#define pb push_back
#define LSOne(S) (S & (-S))
#define MAXN 200020

typedef unsigned long long llu;
typedef long long ll;
typedef long double ld;

const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;

using namespace std;

int main(){
        //freopen("input.txt", "rt", stdin);
        //freopen("output.txt", "wt", stdout);
	int n, idx = 0;
	string line;
	queue<int> r,d;
	scanf("%d%*c", &n);
	cin >> line;
	REP(i,line.size()){
		if(line[i] == 'R') r.push(i);
		else d.push(i);
	}
	while(!r.empty() && !d.empty()){
		if(idx == r.front()){
			d.pop();
			r.push(r.front());
			r.pop();
		} else if(idx == d.front()){
			r.pop();
			d.push(d.front());
			d.pop();
		}
		idx = (idx+1) % n;
	}
	cout << (r.empty() ? "D":"R") << endl;
	return 0;
}



