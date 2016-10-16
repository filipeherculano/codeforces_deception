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
  int m, x, y, total = 0, curr = 0, index = 0;
  cin >> m;
  int v[m];
  REP(i, m) {
    cin >> v[i];
    total += v[i];
  }
  cin >> x >> y;
  REP(i, m){
    if(curr >= x && curr <= y && total-curr >= x && total-curr <= y){
      index = i+1;  
      break;
    }
    curr += v[i];
  }
  cout << index << endl;
  return 0;
}
