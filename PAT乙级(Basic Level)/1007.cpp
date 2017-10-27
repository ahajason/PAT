#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int p1 = 2, p2 = 2;
	int n,c = 0;
	cin>>n;
	for(int i = 3; i <= n; ++i) {
		int j,k = sqrt(i);
		for( j = 2; j <= k; ++j) {
			if(i%j == 0) {
				break;
			}
		}
		if( j > k) {
			p1=p2;
			p2=i;
			if(p2-p1 == 2) {
				c++;
			}
		}
	}
	cout<<c;
	return 0;
}
