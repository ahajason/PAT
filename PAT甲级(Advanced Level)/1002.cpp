/**Please be accurate to 1 decimal place.
因为最后这句话我错了好几次也没发现,
做英文题还是得静下心来慢慢读题.*/
#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	double a[1005]={0};
	int n;
	for(unsigned i = 0; i < 2; ++i) {
		int b;
		double c;
		scanf("%d", &n);
		for(int i = 0; i < n; ++i) {
			scanf("%d%lf", &b, &c);
			a[b]+=c;
		}
	}
	int count=0;
	for(int i = 0; i < 1001; i++) {
		if(a[i]!=0.0) {
			count++;
		}
	}
    printf("%d", count);
	for(int i = 1000; i >= 0; --i) {
		if(a[i]!=0) {
			printf(" %d %.1f", i, a[i]);
		}
	}
	return 0;
}
