#include <iostream>
using namespace std;
int main(){
	int x;
	char ch;
	cin>>x>>ch;
	int row = (int)(x*1.0/2+0.5);
	for(unsigned i = 0; i < row; ++i) {
		if( i == 0 || i == row - 1 ) {
			for(unsigned j = 0; j < x; ++j) {
				cout<<ch;
			}
			cout<<endl;
		}else{
			for(unsigned j = 0; j < x; ++j) {
				if( j == 0 || j == x - 1 ) {
					cout<<ch;
				}
				else {
					cout<<' ';
				}
			}
			cout<<endl;
		}
		
	}
	return 0;
}
