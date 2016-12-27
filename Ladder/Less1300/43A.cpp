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
	int n;
	scanf("%d%*c", &n);
	string name, best;
	int score;
	map<string, int> MAP;
	map<string, int>::iterator it;
	REP(i, n){
		cin >> name;
		if(i == 0){
			best = name;
			score = 1;
		}
		it = MAP.find(name);
		if(it == MAP.end()) MAP.insert(make_pair(name, 1));
		else {
			it->second++;
			if(it->second > score){
				best = it->first;
				score = it->second;
			}
		}
	}
	cout << best << endl;
  return 0;
}
