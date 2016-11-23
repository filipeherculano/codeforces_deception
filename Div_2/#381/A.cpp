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
	ll n, a, b, c, M = 0x3f3f3f3f3f3f3f3f;
	scanf("%lld %lld %lld %lld", &n, &a, &b, &c);
	n %= 4;
	if(n){
		for(int i = 0; i < 10; i++)
			for(int j = 0; j < 10; j++)
				for(int z = 0; z < 10; z++)
					if((i + j*2 + z*3 + n) % 4 == 0)
						M = min(M, i*a + j*b + z*c);
		cout << M << endl;
	} else printf("0\n");
  return 0;
}
