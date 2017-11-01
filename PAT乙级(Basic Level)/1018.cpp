#include <iostream>
using namespace std;

int main(){
	int n;
	char p,q;
	char sign[4] = "BCJ";
	int result[2][3]={0};
	cin>>n;
	for(int i = 0; i < n; ++i) {
		cin>>p>>q;
		if( p == sign[0] && q == sign[1] ) {
			result[0][0]++;
		}else if( p == sign[1] && q == sign[2]){
			result[0][1]++;
		}else if( p == sign[2] && q == sign[0] ){
			result[0][2]++;
		}else if( p == sign[0] && q == sign[2] ){
			result[1][2]++;
		}else if( p == sign[2] && q == sign[1] ){
			result[1][1]++;
		}else if( p == sign[1] && q == sign[0] ){
			result[1][0]++;
		}
	}
	int ying = result[0][0]+result[0][1]+result[0][2];
	int shu = result[1][0]+result[1][1]+result[1][2];
	int ping = n - ying- shu;
	cout<<ying<<" "<<ping<<" "<<shu<<endl;
	cout<<shu<<" "<<ping<<" "<<ying<<endl;
	if( result[0][0] >= result[0][1] && result[0][0] >= result[0][2]) {
		cout<<sign[0]<<" ";
	}else if( result[0][1] >= result[0][0] && result[0][1] >= result[0][2]) {
		cout<<sign[1]<<" ";
	}else if( result[0][2] >= result[0][0] && result[0][2] >= result[0][1]) {
		cout<<sign[2]<<" ";
	}
	if( result[1][0] >= result[1][1] && result[1][0] >= result[1][2]) {
		cout<<sign[0];
	}else if( result[1][1] >= result[1][0] && result[1][1] >= result[1][2]) {
		cout<<sign[1];
	}else if( result[1][2] >= result[1][0] && result[1][2] >= result[1][1]) {
		cout<<sign[2];
	}
} 