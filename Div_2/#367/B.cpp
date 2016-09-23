#include <bits/stdc++.h>
#define FOR(i, n) for(int i = 0; i < n; i++)

typedef unsigned long long llu;
typedef long long ll;
typedef long double Lf;

using namespace std;

int main(){
	int n, aux, m = 0, index = 0, q;
	cin >> n;
	vector<int> wi;
	map<int, int> vi;
	map<int, int>::iterator it;
	FOR(i, n){
		cin >> aux;
		it = vi.find(aux);
		if(it == vi.end()) vi.insert(std::pair<int, int>(aux, 1));
		else it->second++;
		m = max(aux, m);
	}
	FOR(i, m+1){
		it = vi.find(i);
		if(it != vi.end()) index += it->second;
		wi.push_back(index);
	}
	cin >> q;
	FOR(i, q){
		cin >> aux;
		if(aux > wi.size()-1) cout << n << endl;
		else cout << wi[aux] << endl;
	}
  return 0;
}
