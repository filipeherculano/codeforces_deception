#include <bits/stdc++.h>
#define FOR(i, n) for(int i = 0; i < n; i++)

typedef unsigned long long llu;
typedef long long ll;
typedef long double Lf;

using namespace std;

struct node{
	struct node *father;
	struct node *zero;
	struct node *one;
	int bit; // zero or one
	int value;
	int qnt;
}

struct node _insert(struct node root, int num, int bit, int v){
	if(bit > 19) return root;
	if(num&1){
		if(root.one == NULL){
			struct node temp;
			temp.bit = 1;
			temp.value = v;
			temp.qnt = 0;
			temp.father = root;
			temp.one = NULL;
			temp.zero = NULL;
			root.one = temp;
		} else root = _insert(root.one, num >> 1, bit++, v);
	} else {
		if(root.zero == NULL){
			struct node temp;
			temp.bit = 1;
			temp.value = v;
			temp.qnt = 0;
			temp.father = root;
			temp.one = NULL;
			temp.zero = NULL;
			root.one = temp;
		} else root = _insert(root.zero, num >> 1, bit++, v);
	}
	if(bit == 19) temp.qnt++;
	return root;
}

struct node _delete(struct node root, int num, int bit){
	if(num&1){
		if(root.one != NULL){
			root = _delete(root.one, num >> 1, bit++);
		} else {
			if(root.qnt > 1) root.qnt--;
			else{
				if(root.father != NULL) root = root.father;
			}
		}
	} else {
	
	}
}

int main(){
	int t, num;
	scanf("%d%*c", &t);
	char c;
  return 0;
}
