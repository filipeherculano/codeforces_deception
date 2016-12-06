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
	string one, two;
	getline(cin, one);
	getline(cin, two);
	REP(i, one.size()){
		int a = one[i]-'0', b = two[i]-'0';
		a ^= b;
		cout << a;
	}
	cout << endl;
  return 0;
}
