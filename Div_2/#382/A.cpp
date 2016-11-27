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
	int n, k;
	string line;
	scanf("%d %d%*c", &n, &k);
	getline(cin, line);
	int g, t;
	REP(i, n) {
		if(line[i] == 'G') g = i;
		if(line[i] == 'T') t = i;
  }
	for(int i = min(g,t); i <= max(g,t); i += k){
		if(line[min(g,t)] != line[i]) {
			if(line[i] == 'G' || line[i] == 'T'){
				printf("YES\n");
				return 0;
			} else if(line[i] == '#'){
				printf("NO\n");
				return 0;
			}
		}
	}
	printf("NO\n");
	return 0;
}
