#include <bits/stdc++.h>
#define FOR(i, n) for(int i = 0; i < n; i++)

typedef unsigned long long llu;
typedef long long ll;
typedef long double Lf;

using namespace std;

int main(){
  int n, first;
  cin >> n;
  int days[30], v[n];
  bool ok = true;
  FOR(i, 30) {
  	if(i <= 15) days[i] = i;
  	else days[i] = 15-(i%15);
  }
  FOR(i, n) cin >> v[i];
  FOR(i, 30) if(v[0] == days[i]) {first = i; break;}
  for(int i = 0; i < n; i++){
  	if(v[i] != days[first]) ok = false;
  	first = (first+1)%30;
  }
  if(n == 1 && v[0] != 0) ok = false;
  if(ok){
  	if(first <= 15) cout << "UP\n";
  	else cout << "DOWN\n";
  } else cout << "-1\n";

  
  return 0;
}
