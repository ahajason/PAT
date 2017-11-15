#include <iostream>
using namespace std;
int main(){
	string str;
	int a[6]={0};
	int max=0;
	char maxi=0;
	getline(cin,str);
	for(unsigned i = 0; i < str.length(); ++i) {

		if(str[i] == 'P') {
			a[0]++;
		}else if(str[i] == 'A') {
			a[1]++;
		}else if(str[i] == 'T') {
			a[2]++;
		}else if(str[i] == 'e') {
			a[3]++;
		}else if(str[i] == 's') {
			a[4]++;
		}else if(str[i] == 't') {
			a[5]++;
		}
	}
	while(a[0] || a[1] || a[2] || a[3] || a[4] || a[5] ) {
	    if(a[0]) {
	    	a[0]--;
	    	cout<<'P';
	    }
	    if(a[1]) {
	    	a[1]--;
	    	cout<<'A';
	    }
	    if(a[2]) {
	    	a[2]--;
	    	cout<<'T';
	    }
	    if(a[3]) {
	    	a[3]--;
	    	cout<<'e';
	    }
	    if(a[4]) {
	    	a[4]--;
	    	cout<<'s';
	    }
	    if(a[5]) {
	    	a[5]--;
	    	cout<<'t';
	    }
	}
	return 0;
}
