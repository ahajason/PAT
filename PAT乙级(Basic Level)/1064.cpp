#include <iostream>
using namespace std;
int main(){
	int a[100]={0};
	int n,count = 0;
	cin>>n;
	for (int i = 0; i < n; ++i){
		int temp,sum = 0;
		cin>>temp;
		while(temp){
			sum+=temp%10;
			temp/=10;
		}
		if(!a[sum]) {
			count++;
		}
		a[sum]++;
	}
	cout<<count<<endl;
	int flag = 0;
	for (int i = 0; i < 100; ++i){
		if(a[i]){
			if(flag) {
				cout<<" ";
			}else{
				flag=1;
			}
			cout<<i;
		}
	}
	return 0;
}
