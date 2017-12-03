#include <iostream>
using namespace std;
int main(){
	int n,m;
	int a[105],b[105];
	cin>>n>>m;
	for (int i = 0; i < m; ++i){
		cin>>a[i];
	}
	for (int i = 0; i < m; ++i){
		cin>>b[i];
	}
	for (int i = 0; i < n; ++i)	{
		int sum = 0;
		for (int j = 0; j < m; ++j){
			int temp;
			cin>>temp;
			sum+=a[j]*((temp&&b[j])||(!temp&&!b[j]));
		}
		cout<<sum<<endl;
	}
}