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
	int n;
	cin >> n;
	int v[n], close, idx = 0, cnt = 1;
	REP(i, n){
		cin >> v[i];
		if(i){
			if(v[i] < close){
				close = v[i];
				idx = i;
				cnt = 1;
			} else if(v[i] == close) cnt++;
		} else close = v[i]; 
	}
	if(cnt > 1) cout << "Still Rozdil\n";
	else cout << idx+1 << endl;
  return 0;
}
