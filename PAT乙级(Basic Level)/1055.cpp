#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct man{
	string name;
	int h;
};
bool cmp(man a,man b){
	if(a.h == b.h) return a.name < b.name;
	else return a.h > b.h;
}
int main(){
	int n,k;
	cin>>n>>k;
	vector<man> men(n);
	for (int i = 0; i < n; ++i)	{
		man temp;
		cin>>temp.name>>temp.h;
		men.push_back(temp);
	}
	sort(men.begin(),men.end(),cmp);
	int first = n/k + n%k;
	for (int i = 0; i < n; i += first,first = n/k) {
		for (int j = 0; j < first; ++j) {
			int index;
			if(j)cout<<" ";
			if(j >= first/2) {
				index = (j - first/2) * 2 + i;
			}else{
				index = (first / 2) * 2 - 1- j * 2 + i;
			}
			cout<<men[index].name;
		}
		cout<<endl;
	}
}
