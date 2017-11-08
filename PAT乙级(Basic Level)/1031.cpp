#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int n;
	string a ="10X98765432";
	int w[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	int count = 0;
	cin>>n;
	for(unsigned i = 0; i < n; ++i) {
		int z,x,sum = 0;
		int error = false;
		char m;
		string str;
		cin>>str;

		for(unsigned i = 0; i < 17; ++i) {
			if(str[i] < '0' || str[i] > '9') {
				error = true;
				break;
			}
			sum += (str[i]-'0')*w[i];
		}
		m = str[17];
		z = sum % 11;
		if( error || a[z] != m ) {
			cout<<str<<endl;
			count++;
		}
	}
	if( count == 0) {
		cout<<"All passed";
	}
	return 0;
}
