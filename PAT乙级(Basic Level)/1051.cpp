#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(){
	double r1,p1,r2,p2;
	cin>>r1>>p1>>r2>>p2;
	double a,b;
	a = r1*r2*(cos(p1)*cos(p2)-sin(p1)*sin(p2));
	b = r1*r2*(sin(p1)*cos(p2)+cos(p1)*sin(p2));
	if(a<0&&a>=-0.005) {
		a=0.00;
	}
	if(b<0&&b>=-0.005) {
		b=0.00;
	}
	if(b>=0) {
		printf("%.2f+%.2fi",a,b);
	}else{
		printf("%.2f%.2fi",a,b);
	}
	return 0;
}
