#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	string str;
	int n;
	cin>>str>>n;
	string temp;
	int i = 0;
	getchar();
	while(1) {
		getline(cin, temp);
		if(temp == "#") {
			break;
		}
		i++;
		if(  i<=n && temp == str ){
			cout<<"Welcome in";
			break;
		}else{
			cout<<"Wrong password: "<<temp<<endl;
			if(i>=n){
				cout<<"Account locked";
				break;
			}
		}
	}
	return 0;
}
