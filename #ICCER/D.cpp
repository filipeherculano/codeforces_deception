#include <bits/stdc++.h>

#define FOR(i, a, n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define all(a) a.begin(),a.end()
#define pb push_back
#define LSOne(S) (S & (-S))

typedef unsigned long long llu;
typedef long long ll;
typedef long double ld;

const ll INF = 1000000000000000000;
const double EPS = 1e-9;

using namespace std;

set<int> y;

int next(int n){
	while(y.find(n) != y.end()) n /= 2;
	if(n != 0) return n;
	return -1;
}

int main(){
	//freopen("input.txt", "rt", stdin);
	//freopen("output.txt", "wt", stdout);
	int n, aux;
	cin >> n;
	priority_queue<int, vector<int>, less<int> > pq;
	REP(i,n){
		cin >> aux;
		pq.push(aux);
		y.insert(aux);
	}
	while(1){
		int num = next(pq.top());
		if(num == -1) break;
		y.erase(pq.top()); pq.pop(); pq.push(num); y.insert(num);
	}
	while(!pq.empty()) {
		cout << pq.top() << " ";
		pq.pop();
	}
	cout << endl;
	return 0;
}

