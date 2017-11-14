#include <iostream>
using namespace std;
int main()
{
	string a,b;
	int count = 0;
	cin>>a>>b;
	for(unsigned i = 0; i < a.length(); ++i) {
		for(unsigned j = 0; j < b.length(); ++j) {
			if( a[i] == b[j] ) {
				a[i] = '#';
				b[j] = '#';
				count ++;
				break;
			}
		}
	}
	if( count == b.length() ) {
		cout<<"Yes "<<a.length() - count;
	}
	else {
		cout<<"No "<<b.length() - count;
	}
	return 0;
}
