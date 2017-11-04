#include <iostream>
#include <list>
using namespace std;
void rout(int t,int d){
	if( t <= 0) {
		return;
	}
	rout(t/d,d);
	cout<<t % d;
}
int main(){
	int a,b,d,t;
	int st = 0;
	cin>>a>>b>>d;
	t=a+b;
	if( t == 0) {
		cout<<0;
	}else{
		rout(t,d);
	}
	return 0;
}
