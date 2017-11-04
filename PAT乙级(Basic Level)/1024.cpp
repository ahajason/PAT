#include <iostream>
#include <sstream>
using namespace std;
int main()
{
	bool flag = true,eflag = true;
	string str,bef = "",aft = "";
	int mark = 0;
	cin>>str;
	for(int i = 0; i < str.length(); ++i) {
		if( mark == 0 && str[i] == '-') {
			flag = false;
		}else if( mark == 0 && str[i] >= '0' && str[i] <= '9') {
			bef += str[i];
		}else if( str[i] == 'E'){
			mark++;
		}else if( mark == 1 && str[i] >= '0' && str[i] <= '9') {
			aft += str[i];
		}else if( mark == 1 && str[i] == '-') {
			eflag = false;
		}
	}
	stringstream ss;
	int aftInt;
	ss<<aft;
	ss>>aftInt;
	if(!flag) cout<<"-";
	if(eflag) {
		if(bef.length() <= aftInt + 1) {
			while( bef.length() <= aftInt) {
				bef += "0";
			}
			cout<<bef;
		}
		else {
			for(int i = 0; i < bef.length(); ++i) {
				cout<<bef[i];
				if( i == aftInt) {
					cout<<".";
				}
			}
		}
	}else {
		for(int i = 0; i < aftInt; ++i) {
			cout<<0;
			if( i == 0) {
				cout<<".";
			}
		}
		cout<<bef;
	}
	return 0;
}