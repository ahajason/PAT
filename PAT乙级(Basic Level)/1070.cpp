#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n,sum = 0;
	int a[10005];
	cin>>n;
	for (int i = 0; i < n; ++i){
		cin>>a[i];
	}
	sort(a,a+n);
	for (int i = 0; i < n; ++i){
		if(i) {
			sum = (sum+ a[i])/2;
		}else{
			sum = a[i];
		}
	}	
	cout<<sum;
	return 0;
}