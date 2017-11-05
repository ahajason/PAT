#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int a,b,t;
	cin>>a>>b;
	t=((b-a)+50)/100;
	cout.fill('0');
	cout<<setw(2)<<t/3600<<":"<<setw(2)<<t%3600/60<<":"<<setw(2)<<t%60;
}