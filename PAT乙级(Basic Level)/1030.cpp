#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;
int main(){
	int n;
	long long p;
	scanf("%d%lld",&n,&p);
	if (n == 0) {
		printf("0",n);
		return 0;
	}
	vector<long long int> a(n);
	for (int i = 0; i < n; i++)
		scanf("%lld",&a[i]);
	sort(a.begin(), a.end());
	int result = 1;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + result; j < n; j++) {
			if (a[j] > a[i] * p) break;
			result = max(result, j - i + 1);
		}
	}
	printf("%d",result);
	return 0;
}
