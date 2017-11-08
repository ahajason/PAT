#include <iostream>
using namespace std;

int main(){
	double n,max = -1,maxId; //max和m的元素需要长度大于一定
	double m[100005];
	cin>>n;
	for(double i = 0; i < n; ++i) {
		int id,sc;
		cin>>id>>sc;
		m[id] += sc;
		if( m[id] >= max ) {
			max = m[id];
			maxId = id;
		}
	}
	cout<<maxId<<" "<<max;
	return 0;
}
