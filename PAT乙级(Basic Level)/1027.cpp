#include <iostream>
using namespace std;
int main(){
	char ch;
	int n,t = 1,item = 1;
	cin>>n>>ch;
	while(t <= n) {
		item += 2;
		t += 2 * item;
	}
	t -= 2 * item;
	item -= 2;

	int rows = (item+1)/2;
	for(int i = 0; i < rows -1; ++i) {
		for(int j = 0; j < i; ++j) {
			cout<<" ";
		}
		for(int j = 0; j < item - i * 2; j ++) {
			cout<<ch;
		}
		cout<<endl;
	}
	for(int i = rows - 1; i >= 0; --i) {
		for(int j = 0; j < i; ++j) {
			cout<<" ";
		}
		for(int j = 0; j < item - i * 2; j ++) {
			cout<<ch;
		}
		cout<<endl;
	}
	cout<<n-t<<endl;
	return 0;
}