#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
bool cmp(int a,int b){
	return a<b;
}
int main(){
	int n;
	int arr[100005];
	for (int i = 0; i < 100005;arr[i]=100005,++i);
	cin>>n;
	for (int i = 0; i < n; ++i){
		int a,b;
		cin>>a>>b;
		arr[a]=b;
		arr[b]=a;
	}
	int m,count = 0;
	int arr2[100005];
	cin>>m;
	for (int i = 0; i < m; ++i){
		//100005无伴侣
		//负数-1有伴侣且来了
		int temp;
		cin>>temp;
		if(arr[temp]==100005) {
			arr2[i] = temp;
			count++;
		}else if(arr[temp] < 100000) {
			arr2[i] = temp;

			if(arr[arr[temp]] < 0) {
				count--;
			}else{
				count++;
			}
			arr[temp] = - arr[temp]-1;
		}
	}
	sort(arr2,arr2+m,cmp);
	int flag = 0;
	cout<<count<<endl;
	for (int i = 0; i < m; ++i){
		if(arr[arr2[i]]==100005 || arr[-arr[arr2[i]]-1] >= 0){
			if(flag) {
				cout<<" ";
			}else{
				flag = 1;
			}
			printf("%05d",arr2[i]);
		}
	}
	return 0;
}
