#include <iostream>
using namespace std;
int main(){
	int n,m,s,num = 0;
	string a[1005];
	cin>>n>>m>>s;
	if(s>n) {
		cout<<"Keep going..."<<endl;
	}else{
		for(int i = 1; i <= n; ++i){
			string temp; 
			cin>>temp;
			if( i == s ) {
				int j;
				for (j = 0; j < num; ++j) {
					if(temp == a[j]) {
						break;
					}
				}
				if(j == num) {
					s+=m;
					cout<<temp<<endl;
					a[num]=temp;
					num++;
				}else{
					s++;
				}
			}
		}
	}
	return 0;
}
