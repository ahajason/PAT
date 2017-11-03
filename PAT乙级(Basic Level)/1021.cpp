#include <iostream>
using namespace std;

int main(){
	string s;
	int num[10] = {0};
	cin>>s;
	for(int i = 0; i < s.length(); ++i) {
		num[s[i]-'0']++;
	}
	for(int i = 0; i < 10; ++i) {
		if( num[i] != 0 ) {
			cout << i << ":" << num[i] <<endl;
		}
	}
	return 0;
}
