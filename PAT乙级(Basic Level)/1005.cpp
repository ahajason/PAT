#include <iostream>
using namespace std;
int main()
{
	int k,n,blankFlag = 0;
	int mark[9000]={0}; //输入的记为2，途径的记为1
	mark[1]=1;
	cin>>k;
	for(int i = 0; i < k; i++) {
		cin>>n;
		if (mark[n] == 0) mark[n] = 2;  //记录输入，避免覆盖已记为1的
		do{
			if(n%2 == 0) {
				n/=2;
			}
			else{
				n=3*n+1;
				n/=2;
			}
			mark[n] = 1;
		}while(n != 1);
	}
	for(int i = 100; i >= 1; i--) {
		if (mark[i] == 2){
			if(blankFlag) {
				cout<<" ";
			}else{
				blankFlag++;
			}
			cout<<i;
		}
	}
	return 0;
}
