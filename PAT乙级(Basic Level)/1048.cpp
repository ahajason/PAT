#include <iostream>
using namespace std;
int main(){
	string a,b,c = "";
	cin>>a>>b;
	while(a.length() > b.length()) {
		b = '0' + b;
	}
	while(a.length() < b.length()) {
		a = '0' + a;
	}
	int length = a.length();
	for(int i = 0; i < length; ++i){
		int index = length - i - 1;
		if(i%2 == 0) { //奇数
			int t = a[index]- '0' + b[index] - '0';
			t=t%13;
			if(t == 12) {
				c += 'K';
			}else if(t == 11){
				c += 'Q';
			}else if(t == 10){
				c += 'J';
			}else{
				c += t +'0';
			}
		}else{
			int t = b[index] - a[index];
			if(t < 0) {
				t +=10;
			}
			c += t +'0';
		}
	}
	for (int i = length - 1; i >= 0; --i)
	{
		cout<<c[i];
	}
}
