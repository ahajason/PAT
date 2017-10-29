#include <iostream>
using namespace std;

int main(){
	int n;
	int c1,c2,c3,c4,c5;
	c1=c2=c3=c4=c5=0;
	int sum1,sum2,sum4;
	sum1=sum2=sum4=0;
	int max=0;
	cin>>n;
	for(unsigned i = 0; i < n; ++i){
	    int x;
	    
	    cin>>x;
	    if( x%5 == 0 ) {
	    	if(x%2 == 0) {
	    		sum1+=x;
	    		c1++;
	    	}

	    }else if( x%5 == 1 ) {
	    	if(c2%2 == 0) {
	    		sum2+=x;
	    	}else{
	    		sum2-=x;
	    	}
	    	c2++;
	    }else if( x%5 == 2 ) {
	    	c3++;
	    }else if( x%5 == 3 ) {
	    	sum4+=x;
	    	c4++;
	    }else {
	    	if (x >= max)
	    	{
	    		max = x;
	    	}
	    	c5++;
	    }
	}
	(c1 == 0)?cout<<"N ":cout<<sum1<<" ";
	(c2 == 0)?cout<<"N ":cout<<sum2<<" ";
	(c3 == 0)?cout<<"N ":cout<<c3<<" ";
	(c4 == 0)?cout<<"N ":cout<<((int)(sum4*10.0 / c4 + 0.5)) / 10.0<<" ";
	(c5 == 0)?cout<<"N":cout<<max;
}
