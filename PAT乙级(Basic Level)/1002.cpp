#include <iostream>
using namespace std;
string numToStr[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
int outputBlank = 0;
void output(int c){
	if(c == 0){
		return;
	}
	int i;
	i=c%10;
	c/=10;
	output(c);
	if(outputBlank != 0) {
		cout<<" ";
	}
	cout<<numToStr[i];
	outputBlank++;
}
int main()
{
	
	string n;
	int c=0;
	cin>>n;
	for(int i=0;i<n.length();i++) {
		c+=n[i]-'0';
	}
	if(c == 0){
		cout<<numToStr[c];
		return 0;
	}
	output(c);
	return 0;
}