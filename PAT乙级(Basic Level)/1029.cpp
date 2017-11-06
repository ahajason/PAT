#include <iostream>
using namespace std;
int main(){
	string str1,str2;
	int mark[500]={0};
	cin>>str1>>str2;
	for(unsigned i = 0; i < str2.length(); ++i) {
		if( str2[i] >= 'a' &&  str2[i]  <= 'z' ) {
			str2[i] -= 32;
		}
		mark[str2[i]] = 1;
	}
	for(unsigned i = 0; i < str1.length(); ++i) {
		if( str1[i] >= 'a' &&  str1[i]  <= 'z' ) {
			str1[i] -= 32;
		}
		if(mark[str1[i]] == 0){
			cout<<str1[i];
			mark[str1[i]] = 2;
		}
	}
	return 0;
}
