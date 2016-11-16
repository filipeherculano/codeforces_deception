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
	int n, a = 0, d = 0;
	string line;
	scanf("%d%*c", &n);
	getline(cin, line);
	REP(i, line.size()){
		if(line[i] == 'A') a++;
		else d++;
	}
	if(a > d) printf("Anton\n");
	else if(a < d) printf("Danik\n");
	else printf("Friendship\n");
  return 0;
}
