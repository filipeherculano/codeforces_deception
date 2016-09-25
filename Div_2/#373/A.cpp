#include <bits/stdc++.h>
#define FOR(i, n) for(int i = 0; i < n; i++)

typedef unsigned long long llu;
typedef long long ll;
typedef long double Lf;

using namespace std;

int main(){
  int n, first;
  cin >> n;
  int v[n];
  FOR(i, n) cin >> v[i];
  if(v[n-1] == 15) cout << "DOWN\n";
  else if(v[n-1] == 0) cout << "UP\n";
  else if(n == 1) cout << "-1\n";
  else if(v[n-2] < v[n-1]) cout << "UP\n";
  else if(v[n-2] > v[n-1]) cout << "DOWN\n";
  return 0;
}
