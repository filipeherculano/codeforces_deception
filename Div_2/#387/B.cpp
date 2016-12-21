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
	int n, a, g, c, t, m = 0;
	string line;
	scanf("%d%*c", &n);
	getline(cin, line);
	int v[26] = {0};
	REP(i, line.size()){
		if(line[i] != '?')
			v[line[i]-'A']++;	
	}
	a = (n/4)-v['A'-'A'];
	g = (n/4)-v['G'-'A'];
	c = (n/4)-v['C'-'A'];
	t = (n/4)-v['T'-'A'];
	if((n % 4) != 0 || a < 0 || g < 0 || c < 0 || t < 0) cout << "===\n";
	else{
		REP(i, line.size()){
			if(line[i] == '?'){
				if(a){
					line[i] = 'A';
					a--;				
				} else if(g){
					line[i] = 'G';
					g--;	
				} else if(c){
					line[i] = 'C';
					c--;	
				} else if(t){
					line[i] = 'T';
					t--;	
				}
			}
		}
	cout << line << endl;
	}
	return 0;
}





