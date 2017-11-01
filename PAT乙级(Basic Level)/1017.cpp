#include <iostream>
using namespace std;

int main(){
	string a,q = "";
	int b,r,j=0,mark = 0;
	int sub = 0;
	cin>>a>>b;
	for(int i = 0; i < a.length(); ++i) {
		int temp;
		temp = (sub*10+a[i]-'0') / b;
		if(j == 0 &&  temp == 0) {
			
		}else{
			q += (char)(temp+'0');
			j++;
		}
		sub = (sub*10+a[i]-'0') % b;
	}
	if(q == "") {
		q = "0";
	}
	cout<<q<<" "<<sub;
}
