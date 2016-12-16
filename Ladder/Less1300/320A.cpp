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
  bool ok = true;
  string line;
  getline(cin, line);
  if(line[0] == '4') ok = false;
  else {
    REP(i, line.size()-2)
      if((line[i] == '4' && line[i+1] == '4' && line[i+2] == '4'))
        ok = false;
    REP(i, line.size())
      if((line[i] != '1' && line[i] != '4'))
        ok = false;
    
  }
  printf("%s", ok ? "YES\n":"NO\n");
  return 0;
}
