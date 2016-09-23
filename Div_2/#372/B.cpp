#include <bits/stdc++.h>

using namespace std;

int main(){
	bool ok = false;
	int bitmask, offset = 0;
	char words[26];
	string line;

	cin >> line;

	for(int i = 65; i < 91; i++) words[i-65] = (char)i;
	if(line.size() >= 26){
		do{
			bitmask = 0;
			bool one = true;
			for(int i = offset; i < offset+26; i++){
				if(line[i] != '?'){
					if(bitmask&(1 << (line[i] - 'A'))) one = false;
					else bitmask |= (1 << (line[i] - 'A'));		
				}		
			}
			for(int i = offset; i < offset+26; i++){
				if((line[i] == '?' && one) || (line[i] == '?' && (line.size() - offset) == 26) || (line[i] == '?' && i == offset)){
					for(int j = 0; j < 26; j++){
						if(!(bitmask&(1 << j))){
							bitmask |= (1 << j);
							line[i] = words[j];
							break;
						}					
					}
				}
			}
			if(one) ok = one;
			offset++;
		}while((line.size() - offset) >= 26);
		if(ok) cout << line << endl;
		else cout << "-1\n";
	} else cout << "-1\n";
	return 0;
}
