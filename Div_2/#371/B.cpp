#include <bits/stdc++.h>
#define FOR(i, n) for(int i = 0; i < n; i++)

typedef unsigned long long llu;
typedef long long ll;
typedef long double Lf;

using namespace std;

int main(){
	int n, aux, count = 0;
	cin >> n;
	map<int, int> mii;
	map<int, int>::iterator it;
	vector<int> v;
	for(int i = 0; i < n; i++){
		cin >> aux;
		it = mii.find(aux);
		if(it == mii.end()) mii.insert(std::pair<int, int>(aux, 1));
		else it->second++;
	}
	if(mii.size() == 3)
		for(it = mii.begin(); it != mii.end(); it++) 
			v.push_back(it->first);
	
	if(mii.size() == 1) cout << "YES";
	else if(mii.size() == 2) cout << "YES";
	else if(mii.size() == 3){
		if((v[0]+v[2]) == 2*v[1]) cout << "YES";
		else cout << "NO";
	} else cout << "NO";
	cout << endl;
  return 0;
}



