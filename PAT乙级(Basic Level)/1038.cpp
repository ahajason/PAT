#include <iostream>
using namespace std;
int main(){
	int score[200]={0};
	int n;
	cin>>n;
	for(unsigned i = 0; i < n; ++i) {
		int t;
		cin>>t;
		score[t]++;
	}
	cin>>n;
	for(unsigned i = 0; i < n; ++i) {
		int t;
		cin>>t;
		if( i ) {
			cout<<" "<<score[t];
		}
		else {
			cout<<score[t];
		}
	}
}
