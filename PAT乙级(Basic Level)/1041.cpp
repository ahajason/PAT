#include <iostream>
#include <vector>
using namespace std;
struct stu{
	string num;
	int a;
	int b;
};
int main(){
	int n;
	cin>>n;
	vector<stu> stus(n);
	for(unsigned i = 0; i < n; ++i) {
		cin>>stus[i].num>>stus[i].a>>stus[i].b;
	}
	int m;
	cin>>m;
	for(unsigned i = 0; i < m; ++i) {
		int t;
		cin>>t;
		for(unsigned i = 0; i < n; ++i) {
			if( t == stus[i].a) {
				cout<<stus[i].num<<" "<<stus[i].b<<endl;
			}
		}
	}
}
