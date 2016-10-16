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
  int n, m;
  cin >> n >> m;
  int color[n] = {0}; 
  REP(i, m){
    bool cor[3];
    REP(i, 3) cor[i] = true;
    int a,b,c;
    cin >> a >> b >> c;
    if(color[a-1]) cor[color[a-1]-1] = false;
    if(color[b-1]) cor[color[b-1]-1] = false;
    if(color[c-1]) cor[color[c-1]-1] = false;
    if(!color[a-1]) {
      REP(i, 3){
        if(cor[i]) {
          cor[i] = false;
          color[a-1] = i+1;
          break;
        }
      }
    }
    if(!color[b-1]) {
      REP(i, 3){
        if(cor[i]) {
          cor[i] = false;
          color[b-1] = i+1;
          break;
        }
      }
    }
    if(!color[c-1]) {
      REP(i, 3){
        if(cor[i]) {
          cor[i] = false;
          color[c-1] = i+1;
          break;
        }
      }
    }
  }
  REP(i, n) printf("%d ", color[i]);
  cout << endl;
  return 0;
}
