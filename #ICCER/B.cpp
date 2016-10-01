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
	bool ok = true;
	int n, aux;
	string line;
	vector<int> pat;
	cin >> n;
	REP(i, n) {
		cin >> aux;
		pat.pb(aux);
	}
	scanf("%*c");
	REP(i, n){
		int sum = 0;
		getline(cin, line);
		REP(j, line.size()){
			if(line[j] == 'a' || line[j] == 'e' || line[j] == 'i' || line[j] == 'o' || line[j] == 'u' || line[j] == 'y')
				sum++;
		}
		if(sum != pat[i]) ok = false;
	}
	printf("%s", ok ? "YES\n":"NO\n");
  return 0;
}
