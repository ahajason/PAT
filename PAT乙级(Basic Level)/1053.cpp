#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int n,d,a=0,b=0;
	double e;
	cin>>n>>e>>d;
	for (int i = 0; i < n; ++i)	{
		int k,count=0;
		cin>>k;
		for (int i = 0; i < k; ++i)	{
			double x;
			cin>>x;
			if(x < e) {
				count++;
			}
		}
		if(count > k/2) {
			if(k > d) {
				b++;
			}else{
				a++;
			}
		}
	}
	printf("%.1f%% %.1f%%\n", a*100.0/n,b*100.0/n);
	return 0;
}
