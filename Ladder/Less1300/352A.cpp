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
	int n, aux;
	cin >> n;
	int count[2] = {0,0};
	REP(i, n){
		cin >> aux;
		if(aux == 5) count[0]++;
		else count[1]++;	
	}
	if(count[0] >= 9 && count[1] >= 1) {
		REP(i, count[0]/9) cout << 555555555;
		REP(i, count[1]) cout << "0";
		cout << endl;
	} else if(count[1] > 0) cout << "0\n";
	else cout << "-1\n";
  return 0;
}
