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
	//ios_base::sync_with_stdio(0);
  	int n, t, extra = 0;
	bool dot = false, carry = false;
	scanf("%d %d%*c", &n, &t);
	string line;
	getline(cin,line);
	deque<int> after;
	vector<int> before;
	int end = n-1;
	for(int idx = 0; idx < n; idx++){
		if(line[idx] == '.') dot = true, idx++;
		if(dot && (line[idx]-'0') >= 5) {
			t--;
			if(!after.empty()) after.back()++;
			break;
		}
		if(dot) after.pb(line[idx]-'0');
		else before.pb(line[idx]-'0');

	}
	while(!after.empty() && t){
		if(after.back() >= 5) { 
			after.pop_back();
			if(!after.empty()) after.back()++;
			t--;
		} else break;
	}	
	if(after.empty()) carry = true;	
	for(int i = before.size()-1; i >= 0 && carry; i--){
		if(before[i] == 9) before[i] = 0;
		else {
			before[i]++;
			carry = false;
		}
	}
	if(carry) cout << "1";
	REP(i,before.size()) cout << before[i];
	if(!after.empty()) cout << '.';	
	while(!after.empty()){
		cout << after.front();
		after.pop_front();
	}
	cout << endl;
	return 0;
}



