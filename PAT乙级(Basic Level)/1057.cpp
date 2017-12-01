#include <iostream>
using namespace std;
int main(){
	string str;
	int sum = 0,a=0,b=0;
	getline(cin,str);
	for (int i = 0; i < str.length(); ++i){
		if(str[i]>='a'&&str[i]<='z') {
			sum+=str[i]-'a'+1;
		}else if(str[i]>='A'&&str[i]<='Z') {
			sum+=str[i]-'A'+1;
		}
	}
	while(sum) {
	    (sum%2)?b++:a++;
	    sum/=2;
	}
	cout<<a<<" "<<b;
	return 0;
}
