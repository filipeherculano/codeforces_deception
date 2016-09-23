#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, c, count = 1, aux;
	cin >> n >> c;
	int v[n];
	for(int i = 0; i < n; i++) {cin >> v[i];}
	for(int i = 1; i < n; i++){
		if((v[i] - v[i-1]) > c) count = 1;
		else count++;
	}
	cout << count << endl;
	return 0;
}
