#include <iostream>
using namespace std;

int main(){
	string str;
	getline(cin,str);
	int j = str.length();
	for(int i = str.length() - 1; i >= -1; i--) {
		if(str[i] == ' ' || i == -1) {
			for(int k = i+1; k <j; ++k) {
				cout<<str[k];
			}
			if(i != -1) {
				cout<<" ";
			}
			j=i;
		}
	}
	return 0;
}
