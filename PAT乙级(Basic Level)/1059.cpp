#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
bool prime(int a){
	int k = sqrt(a);
	for (int i = 2; i <= k; ++i){
		if(a%i == 0) {
			return false;
		}
	}
	return true;
}
int main(){
	int n;
	int a[10005]={0};
	cin>>n;
	for (int i = 1; i <= n; ++i){
		int temp;
		cin>>temp;
		a[temp]=i;
	}
	int m;
	cin>>m;
	for (int i = 0; i < m; ++i){
		int temp;
		cin>>temp;
		printf("%04d: ",temp);
		if(!a[temp]) {
			cout<<"Are you kidding?"<<endl;
		}else if(a[temp] == 10004){//避免重复
			cout<<"Checked"<<endl;
		}else if(a[temp] == 1){
			cout<<"Mystery Award"<<endl;
			a[temp] = 10004;
		}else if(prime(a[temp])) {
			cout<<"Minion"<<endl;
			a[temp] = 10004;
		}else{
			cout<<"Chocolate"<<endl;
			a[temp] = 10004;
		}
	}
	return 0;
}