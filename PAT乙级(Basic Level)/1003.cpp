#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int n;
	cin>>n;
	getchar();//吃空格
	while(n--) {
		char ch; 
		int a[3]={0,0,0};
		int flag = 0;
		int isNo = 0;
		while((ch=getchar())!='\n') {//为A计数
			if(isNo==1){
				continue;
			}else if(ch == 'P' && flag == 0) {
				flag++;
			}else if(ch == 'T' && flag == 1){
				flag++;
			}else if(ch == 'A'){
				a[flag]++;
			}else{
				isNo=1;
			}
		}
		if(isNo == 1 || a[1] == 0 || flag !=2) {
			cout<<"NO"<<endl;
		}else if(a[0]*a[1]==a[2]){
			cout<<"YES"<<endl;
		}else{
 			cout<<"NO"<<endl;
		}
	}
	return 0;
}