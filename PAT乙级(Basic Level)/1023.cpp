#include <iostream>
using namespace std;
int main()
{
	int a[10]={0};
	for(int i = 0; i < 10; ++i) {
		cin>>a[i];
	}
	for(int i = 1; i < 10; ++i) {
		if( a[i] != 0 ) {
			cout<<i;
			a[i]--;
			break;
		}
	}
	int i = 0;
	while( i < 10){
		if(a[i] > 0) {
			cout<<i;
			a[i]--;
		}else{
			i++;
		}
	}
	return 0;
}