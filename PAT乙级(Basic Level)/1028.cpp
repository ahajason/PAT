#include <iostream>
#include <cstdio>
#include <list>
#include <algorithm>
using namespace std;
struct people{
	string name;
	int date;
};
bool cmp(people a,people b){
	return a.date > b.date;
}
int main(){
	int n;
	list<people> plist;
	cin>>n;
	for(unsigned i = 0; i < n; ++i) {
		people temp;
		int y,m,d;
		cin>>temp.name;
		scanf("%d/%d/%d",&y,&m,&d);
		temp.date = y * 10000 + m * 100 +d;
		if(temp.date >= 18140906 && temp.date <= 20140906) { //直接找max和min应该会更好
			plist.push_back(temp);
		}
	}
	plist.sort(cmp);
	if(plist.size()) {
		cout<<plist.size()<<" ";
		cout<<plist.back().name<<" ";
		cout<<plist.front().name;
	}else{
		cout<<plist.size();
	}
	
}
