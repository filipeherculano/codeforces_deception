#include <bits/stdc++.h>

using namespace std;

int main(){
  long long l1, l2, r1, r2, k, start, end, time;
  cin >> l1 >> r1 >> l2 >> r2 >> k;
  if((l2 <= r1 && r2 >= l1) || (r1 < r2 && l1 > l2) || (r1 > r2 && l1 < l2)) {
    if(r2 <= r1 && l1 >= l2) {
      start = l1;
      end = r2;
    } else if(r1 <= r2 && l2 >= l1){
      start = l2;
      end = r1;
    } else if(r1 < r2 && l1 > l2){
      start = l1;
      end = r1;
    } else if(r1 > r2 && l1 < l2){
      start = l2;
      end = r2;
    }
    time = end - start + 1;
    if(k <= end && k >= start) time--;
    cout << time << endl;
  } else {
    cout << "0" << endl;  
  }
  return 0;
}
