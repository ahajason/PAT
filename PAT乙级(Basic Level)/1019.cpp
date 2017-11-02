#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;
bool cmp(int a,int b){
	return a >= b;
}
bool rcmp(int a,int b){
	return a <= b;
}
int main(){
	stringstream ss;
	string n;
	int a,b;
	cin>>n;
	while( n.length() < 4 ) {
		n = "0"+n;
	}
	while( true ) {
	    sort(n.begin(),n.end(),cmp);
		ss<<n;
		ss>>a;
		ss.clear();
		sort(n.begin(),n.end(),rcmp);
		ss<<n;
		ss>>b;
		ss.clear();
		ss<<setw(4)<<setfill('0')<<a-b;
		ss>>n;
		ss.clear();
		cout<<setw(4)<<setfill('0')<<a<<" - "<<setw(4)<<setfill('0')<<b<<" = "<<n<<endl;
		if(n == "0000") {
			break;
		}else if(n == "6174"){
			break;
		}
	}
	return 0;
}