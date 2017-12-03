#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(){
	int n;
	double max;
	cin>>n;
	for (int i = 0; i < n; ++i){
		double a,b,t;
		cin>>a>>b;
		t = sqrt(a*a+b*b);
		if(!i || t >= max){
			max = t;
		}
	}
	printf("%.2f",max);
	return 0;
}
