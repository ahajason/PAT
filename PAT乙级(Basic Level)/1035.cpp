//参考网络
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int cmp(int a, int b)
{
	return a < b;
}

int main(){
	int N;
	scanf("%d", &N);
	int nin[N], nout[N];
	for ( int i = 0; i < N; i ++ ) {
		scanf("%d", &nin[i]);
	}
	for ( int i = 0; i < N; i ++ ) {
		scanf("%d", &nout[i]);
	}
	int i, j;
	for ( i = 0; nout[i] <= nout[i + 1] && i < N - 1; i ++ );
	for ( j = i + 1; nin[j] == nout[j] && j < N; j ++ );                        //这两个循环用来确定是否为插入
	if ( j == N ) {
		printf("Insertion Sort\n");
		sort(nin, nin + i + 2, cmp);
	} else {
		printf("Merge Sort\n");
		int sign = 1;
		int k = 1;
		while ( sign ) {
			sign = 0;                                         //这个sign是用来阻止归并排序的，可以说非常巧妙
			for ( i = 0; i < N; i ++ ) {                               
				if ( nin[i] != nout[i] ) {
					sign = 1;
				}
			}
			k *= 2;
			for ( i = 0; i < N/k; i ++ ) {               //归并排序操作，如果不是很熟悉归并，确实很难写出来
				sort(nin + (i * k), nin + ((i + 1) * k), cmp);
			}
			sort(nin + i * k, nin + N, cmp);
		}
	}
	int flag = 0;
	for ( j = 0; j < N; j ++ ) {
		if ( flag != 0 ) {
			printf(" ");
		}
		printf("%d", nin[j]);
		flag ++;
	}
	return 0;
}