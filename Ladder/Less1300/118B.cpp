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
  int n;
  cin >> n;
  string mat[n+1];
  for(int i = 0; i <= n; i++){
    int space = n-i;
    REP(z, (space*2)) mat[i].pb(' ');
    for(int j = 0; j <= i; j++){
        mat[i].pb(j+'0');
        mat[i].pb(' ');
    }
    mat[i].pop_back();
  }
  for(int i = 1; i <= n; i++){
    for(int j = i-1; j >= 0; j--){
      mat[i].pb(' ');
      mat[i].pb(j+'0');
    }
  }
  for(int i = 0; i <= n; i++) cout << mat[i] << endl;
  for(int i = n-1; i >= 0; i--) cout << mat[i] << endl;
  return 0;
}
