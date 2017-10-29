#include <iostream>
using namespace std;

int main(){
	string s1,s2,s3,s4;
	int flag = 0;
	string weeks[7]= {"MON","TUE","WED","THU","FRI","SAT","SUN"};
	cin>>s1>>s2>>s3>>s4;
	for(unsigned i = 0; i < s1.length(); ++i) {
		if( flag == 0 && s1[i]>='A' && s1[i]<='G' && s1[i] == s2[i]) {
			cout<<weeks[s1[i]-'A']<<" ";
			flag++;
		}else if(flag == 1 && s1[i] == s2[i]) {
			if(s1[i]>='0'&&s1[i]<='9') {
				cout<<"0"<<s1[i]<<":";
				flag++;
			}else if(s1[i]>='A'&&s1[i]<='N'){
				cout<<s1[i]-'A'+10<<":";
				flag++;
			}
		}else if(flag == 2) {
			break;
		}
	}
	for(unsigned i = 0; i < s3.length(); ++i) {
		if(s3[i] == s4[i] &&(s3[i]>='a' && s3[i]<='z') || (s3[i]>='A' && s3[i]<='Z')) {
			(i<=9)?cout<<"0"<<i:cout<<i;;
			break;
		}
	}
	return 0;
}