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
	int p;
	string hora;
	scanf("%d%*c", &p);
	cin >> hora;
	if(p == 12){
		if(hora[0] != '1' && hora[0] != '0'){
			if(hora[1] == '0') hora[0] = '1';
			else hora[0] = '0';
		} else {
			if(hora[0] == '0' && hora[1] == '0') hora[1] = '1';
			else if(hora[0] == '1' && hora[1] > '2') hora[1] = '0';
		}
	} else if(p == 24){
		if(hora[0] <= '2'){
			if(hora[0] == '2' && hora[1] > '3') hora[1] = '0';
		} else hora[0] = '0';
	}
	if(hora[3] > '5') hora[3] = '0';
	cout << hora << endl;
  return 0;
}





