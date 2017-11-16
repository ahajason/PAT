#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
	int a[100005],b[100005],c[100005];
	int max = 0;
	int n;
	int j = 0;
	cin>>n;
	for(int i = 0; i < n; ++i) {
		cin>>a[i];
		b[i] = a[i];
	}
	sort(a,a+n);
	for(int i = 0; i < n; ++i) {
		if( a[i] == b[i] && b[i] > max) {
			c[j++] = a[i];
		}
		if( b[i] > max) {
			max = b[i];
		}
	}
	cout<<j<<endl;
	for(unsigned i = 0; i < j; ++i) {
		if(i) {
			cout<<" ";
		}
		cout<<c[i];
	}
	cout<<endl;
	return 0;
}
