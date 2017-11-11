#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int a1,b1,c1,a2,b2,c2,a3,b3,c3;
	long long sum1,sum2,sum3;
	scanf("%d.%d.%d %d.%d.%d",&a1,&b1,&c1,&a2,&b2,&c2);
	sum1 = a1 * 17 * 29 + b1 * 29 + c1;
	sum2 = a2 * 17 * 29 + b2 * 29 + c2;
	sum3 = sum2 -sum1;
	if( sum3 < 0 ) {
		sum3 = -sum3;
		printf("-");
	}
	c3 = sum3 % 29;
	sum3 /= 29;
	b3 = sum3 % 17;
	sum3 /= 17;
	a3 = sum3;
	printf("%d.%d.%d", a3,b3,c3);
}
