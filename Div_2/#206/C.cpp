#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, l, r, ql, qr, aux, res = -1;
	cin >> n >> l >> r >> ql >> qr;
	vector<int> vi, left, right;
	left.push_back(0);
	right.push_back(0);
	for(int i = 0; i < n; i++) {
		cin >> aux;
		left.push_back(aux+left.back());
		vi.push_back(aux);
	}
	for(int i = n-1; i >= 0; i--) right.push_back(vi[i]+right.back());
	for(int k = 0; k <= n; k++){
		int cur = 0;
		cur = left[k]*l + right[n-k]*r;
		if(k < n-k) cur += (n-(k*2)-1) * qr; 
		else if(k > n-k) cur += ((2*k) - n - 1) * ql;
		if(res == -1 || res > cur) res = cur;
	}
	cout << res << endl;
  return 0;
}
