#include <bits/stdc++.h>
#define FOR(i, n) for(int i = 0; i < n; i++)

typedef unsigned long long llu;
typedef long long ll;
typedef long double Lf;

using namespace std;

int main(){
	int n, countR = 0, countB = 0, temp, r = 0, b = 0;
	scanf("%d%*c", &n);
	string line;
	cin >> line;
	FOR(i, line.size()){
		if(i&1){
			if(line[i] != 'r') b++;
		} else {
			if(line[i] != 'b') r++;
		}
	}
	countB += min(r, b);
	r -= countB; b -= countB;
	countB += max(r, b);
	r = 0; b = 0;
	FOR(i, line.size()){
		if(i&1){
			if(line[i] != 'b') r++;
		} else {
			if(line[i] != 'r') b++;
		}
	}
	countR += min(r, b);
	r -= countR; b -= countR;
	countR += max(r, b);
	cout << min(countR, countB) << endl;
  return 0;
}
