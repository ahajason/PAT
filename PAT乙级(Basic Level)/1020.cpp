#include <iostream>
#include <algorithm>

using namespace std;
struct yb{//需全设为浮点型
	double n;
	double p;
	double u;
};
bool cmp(yb a, yb b){
	return a.u > b.u;
}
int main(){
	int n;
	double d,sum = 0;
	yb y[1005];
	cin>>n>>d;
	for(int i = 0; i < n; ++i) {
		cin>>y[i].n;
	}
	for(int i = 0; i < n; ++i) {
		cin>>y[i].p;
	}
	for(int i = 0; i < n; ++i) {
		y[i].u =  y[i].p / y[i].n;
	}
	sort(y,y+n,cmp);
	for (int i = 0; i < n; i++) {
		if( d >= y[i].n ) {
			d -= y[i].n;
			sum += y[i].p;
		}else{
			sum += d * y[i].u;
			break;
		}
	}
	cout.setf(ios::fixed);  
	cout.precision(2);
	cout<<sum;
}