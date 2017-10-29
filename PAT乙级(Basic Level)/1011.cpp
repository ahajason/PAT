#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(unsigned i = 1; i <= t; ++i){
	    long long int a,b,c;
	    cin>>a>>b>>c;
	    cout<<"Case #"<<i<<": ";
	    if(a + b > c) {
	    	cout<<"true"<<endl;
	    }
	    else {
	    	cout<<"false"<<endl;
	    }
	}
}
