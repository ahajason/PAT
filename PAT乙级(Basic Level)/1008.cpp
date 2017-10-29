#include <iostream>
using namespace std;

int main(){
	int a[105];
	int m,n;
	cin>>n>>m;
	for(unsigned i = m; i < n+m; ++i) {
		cin>>a[i%n];
	}
	for(unsigned i = 0; i < n; ++i) {
		cout<<((i==0)?"":" ")<<a[i];
	}
	return 0;
}
