#include <iostream>
#include <iomanip>
using namespace std;
void fun(int c){
	if(c==0) {
		return;
	}
	fun(c/1000);
	if(c/1000!=0) {
		cout<<",";
		cout<<setw(3)<<setfill('0')<<c%1000;
	}else{
		cout<<c%1000;
	}
}
int main(){
	int a,b,c,flag=0;
	cin>>a>>b;
	c=a+b;
	if(c<0) {
		flag=1;
		c=-c;
		cout<<"-";
	}else if(c==0) {
		cout<<0;
	}
	fun(c);

}
