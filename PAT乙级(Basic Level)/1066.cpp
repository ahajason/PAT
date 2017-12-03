#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int n,m,a,b,c;
	cin>>n>>m>>a>>b>>c;
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j)	{
			int t;
			scanf("%d",&t);
			if(j) {
				printf(" ");
			}
			printf("%03d",(t>=a&&t<=b)?c:t);
		}
		printf("\n");
	}
}
