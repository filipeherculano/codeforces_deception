#include <bits/stdc++.h>
#define FOR(i, n) for(int i = 0; i < n; i++)

typedef unsigned long long llu;
typedef long long ll;
typedef long double Lf;

using namespace std;

int main(){
				int q, num;
				char op;
				scanf("%d%*c", &q);
				vector< pair<int, int> > zero;
				vector< pair<int, int> > one;
				for(int i = 0; i < 30; i++){
					for(int j = 0; j < pow(2, i); j++){
						pair<int, int> z;
						z.first = j&1;
						z.second = 0;
					}
				}
				for(int i = 0; i < 30; i++){
					for(int j = 0; j < pow(2, i); j++){
						pair<int, int> o;
						o.first = j&1;
						o.second = 0;
					}
				}
				cout << "haa\n";
				while(q--){
								cin >> op >> num;
								if(op == '+') {
									
								} else if(op == '-'){
								} else if(op == '?'){
								}
				}
				return 0;
}





