#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	string str;
	int a[200]={0};
	int max=0;
	char maxi=0;
	getline(cin,str);
	for(unsigned i = 0; i < str.length(); ++i) {

		if(str[i]>='a' && str[i]<='z') {
			a[str[i]]++;

		}
		if(str[i]>='A' && str[i]<='Z') {
			a[str[i]+32]++;
		}
	}
	for(unsigned i = 0; i < 200; ++i) {
		if(a[i] > max ){
			max = a[i];
			maxi = i;
		}
	}
	cout<<maxi<<" "<<max;
	return 0;
}
