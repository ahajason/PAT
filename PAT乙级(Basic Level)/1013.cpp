#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        if (a % i == 0)
            return false;
    }
    return true;
}

int main(){
	int n,m,j=0;
	cin>>n>>m;
	for(int i = 2;; ++i) {
		if(isprime(i)) {
			j++;
			if (j >= n){
				cout<<i;
				if(j >= m) {
					return 0;
				}else if((j-n+1)%10 == 0) {
					cout<<endl;
				}else{
					cout<<" ";
				}
			}
		}
	}
}