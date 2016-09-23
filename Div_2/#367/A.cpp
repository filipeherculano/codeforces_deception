#include <bits/stdc++.h>
#define FOR(i, n) for(int i = 0; i < n; i++)

typedef unsigned long long llu;
typedef long long ll;
typedef long double Lf;

using namespace std;

int main(){
  long double time, m = 10000.0;
  int a, b, n;
  cin >> a >> b;
  cin >> n;
  FOR(i, n){
    long double speed;
    int x, y, v;
    cin >> x >> y >> v;
    speed = sqrtl((long double)((a-x)*(a-x)) + ((b-y)*(b-y)));
    speed /= (long double)v;
    m = min(m, speed);
  }
  printf("%.20Lf\n", m);
  return 0;
}
