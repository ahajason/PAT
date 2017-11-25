#include <iostream>
#include <cstdio>
using namespace std;
#define MAXSIZE 10005
int main(){
	int a[MAXSIZE]={0};
	int n,max=0,maxn=0;
	cin>>n;
	for(unsigned i = 0; i < n; ++i) {
		int num,score;
		scanf("%d-%*d %d",&num,&score);
		a[num]+=score;
	}
	for(unsigned i = 0; i < MAXSIZE; ++i) {
		if(a[i] >= max) {
			max = a[i];
			maxn = i;
		}
	}
	cout<<maxn<<" "<<max;
	return 0;
}