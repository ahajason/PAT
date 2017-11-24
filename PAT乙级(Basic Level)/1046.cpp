#include <iostream>
using namespace std;
int main(){
	int n,jia=0,yi=0;
	cin>>n;
	for(unsigned i = 0; i < n; ++i) {
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		if(b == d) {
			;
		}else if(a+c == b) {
			yi++;
		}else if(a+c == d){
			jia++;
		}
	}
	cout<<jia<<" "<<yi;
}
