#include <iostream>
using namespace std;
int main()
{
	string s;
	long long count=0,pcount=0,acount=0,tcount=0;
	cin>>s;
	for(unsigned i = 0; i < s.length(); ++i) {
		if(s[i] == 'P') {
			pcount++;
		}else if(s[i] == 'A'){
			acount += pcount;
			
		}else if(s[i] == 'T'){
			tcount%=1000000007;
			tcount += acount;
		}
	}
	count = tcount % 1000000007;
	cout<<count<<endl;
}
