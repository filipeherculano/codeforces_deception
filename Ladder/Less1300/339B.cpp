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
	ll n, m, curr = 1, sum = 0, aux;
	cin >> n >> m;
	REP(i, m)	{
		cin >> aux;
		if(curr <= aux) sum += llabs(curr-aux);
		else sum += n-curr+aux;
		curr = aux;
	}
	cout << sum << endl;
  return 0;
}
