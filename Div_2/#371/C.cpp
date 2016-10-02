#include <bits/stdc++.h>

#define FOR(i, a, n) for(int i = (int)(a); i < (int)(n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define all(a) a.begin(),a.end()
#define pb push_back

typedef unsigned long long llu;
typedef long long ll;
typedef long double ld;

using namespace std;

long long hashFunction(long long num){
	long long res = 0, pot = 1;
	while(num){
		int aux = num % 10;
		if(aux % 2) res += pot;
		pot *= 2;
		num /= 10;
	}
	return res;
}

int main(){
	int t;
	long long num;
	char c;
	scanf("%d%*c", &t);
	int hash[262144];
	REP(i, 262144) hash[i] = 0;
	while(t--){
		cin >> c >> num;
		if(c == '+') hash[hashFunction(num)]++;
		else if(c == '-') hash[hashFunction(num)]--;
		else if(c == '?') cout << hash[hashFunction(num)] << endl;
	}
  return 0;
}










