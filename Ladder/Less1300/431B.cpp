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
	ios_base::sync_with_stdio(0);
	vector<int> v = {0, 1, 2, 3 ,4};
	int mat[5][5], MAX = -INF;
	REP(i, 5) REP(j, 5) cin >> mat[i][j];
	do{
		int sum = 0;
		sum += mat[v[0]][v[1]] + mat[v[1]][v[0]] + mat[v[2]][v[3]] + mat[v[3]][v[2]];
		sum += mat[v[1]][v[2]] + mat[v[2]][v[1]] + mat[v[3]][v[4]] + mat[v[4]][v[3]];
		sum += mat[v[2]][v[3]] + mat[v[3]][v[2]];
		sum += mat[v[3]][v[4]] + mat[v[4]][v[3]];
		MAX = max(MAX, sum);
	} while(next_permutation(all(v)));
	cout << MAX << endl;
  return 0;
}
