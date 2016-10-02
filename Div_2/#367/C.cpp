#include <bits/stdc++.h>
#define FOR(i, n) for(int i = 0; i < n; i++)

typedef unsigned long long llu;
typedef long long ll;
typedef long double Lf;

using namespace std;

string swap(string a){
	int i = 0, j = a.size()-1;
	while(i < j){
		swap(a[i], a[j]);
		i++; j--;
	}
	return a;
}

int main(){
	int n;
	llu M = 1e+18;
	
	cin >> n;
	
	string num[n];
	llu c[n], pd[n][2];
	
	FOR(i, n) cin >> c[i];
	scanf("%d");
	FOR(i, n) cin >> num[i];
	
	pd[0][0] = 0; pd[0][1] = c[0];
  for(int i = 1; i < n; i++){
  	for(int j = 0; j < 2; j++){
  		string temp;
			pd[i][j] = M;
			if(!j){
				temp = swap(num[i-1]);
				if(num[i-1].compare(num[i]) <= 0) pd[i][j] = min(pd[i][j], pd[i-1][0] + c[i]*j);
				if(temp.compare(num[i]) <= 0) pd[i][j] = min(pd[i][j], pd[i-1][1] + c[i]*j);
			} else {
				temp = swap(num[i]);
				string temp2 = swap(num[i-1]);
				if(num[i-1].compare(temp) <= 0)	pd[i][j] = min(pd[i][j], pd[i-1][0] + c[i]*j);
				if(temp2.compare(temp) <= 0) pd[i][j] = min(pd[i][j], pd[i-1][1] + c[i]*j);
			}
  	}
  }
  if(min(pd[n-1][0], pd[n-1][1]) != M) cout << min(pd[n-1][0], pd[n-1][1]) << endl;
  else cout << "-1\n";
  return 0;
}
