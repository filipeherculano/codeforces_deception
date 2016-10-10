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
  int n, m, cnt = 0;
  cin >> n >> m;
  int v[n], mm = n/m;
  vector<int> can, pos[m];
  vector<int>::iterator it;
  REP(i, n) {
    cin >> v[i];
    if(v[i] > m) can.pb(i);
  }
  REP(i, m) REP(j, n) if(v[j] == i+1) pos[i].pb(j);
  REP(i, m) {
    if(pos[i].size() > mm) {
      REP(j, pos[i].size()-mm){
        can.pb(pos[i][j]);  
      }
    }
  }
  
  REP(i, m){
    if(pos[i].size() < mm){
      REP(j, mm-pos[i].size()){
        it = can.begin();
        v[*it] = i+1;
        can.erase(it);
        cnt++;
      }
    }   
  }

  printf("%d %d\n", mm, cnt);
  REP(i, n) printf("%d ", v[i]);
  cout << endl;
  return 0;
}
