#include <iostream>
#include <algorithm>
#include <vector>
bool cmp(int a,int b){
	return a>b;
}
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i){
		cin>>v[i];
	}
	sort(v.begin(),v.end(),cmp);
	for (int i = n; i >= 0; --i){
		if(i < v[i-1]) {
			cout<<i;
			return 0;
		}
	}
	cout<<0;
	return 0;
}
