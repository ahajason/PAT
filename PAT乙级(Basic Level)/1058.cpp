#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;
struct node{
	int a,b,c;
	char d[5];
	int count;
	node(){count=0;}
};
int main(){
	int n,m;
	cin>>n>>m;
	vector<node> v(m);
	for (int i = 0; i < m; ++i){
		cin>> v[i].a>>v[i].b>>v[i].c;
		for (int j = 0; j < v[i].c; ++j){
			cin>>v[i].d[j];
		}
	}
	scanf("%*c");
	for (int i = 0; i < n; ++i){
		int stu = 0; 
		for (int j = 0; j < m; ++j){
			int q,error=0;
				scanf("%*c%d",&q);
			if(q!=v[j].c) error = 1;
			for (int k = 0; k < q; ++k){
				char ch;
				scanf(" %c",&ch);
					if(!error) {
					if(ch != v[j].d[k]) {
						error = 1;
					}
				}
			}
			if(error) {
				v[j].count++;
			}else{
				stu += v[j].a;
			}
			scanf("%*c%*c");

		}
		cout<<stu<<endl;
	}
	int max = 0;
	for (int i = 0; i < m; ++i){
		if(v[i].count>max) {
			max = v[i].count;
		}
	}
	if(max) {
		cout<<max;
		int flag = 0;
		for (int i = 0; i < m; ++i){
			if(v[i].count == max) {
				cout<<" "<<i+1;
			}
		}
	}else{
		cout<<"Too simple"<<endl;
	}
	return 0;
}
