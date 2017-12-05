#include <iostream>
#include <cstdio>
using namespace std;
struct s{
	int score;
	int a;
	int b;
	int mark[5];
	int error[5];
};
int toInt(char ch){
	if(ch == 'a') {
		return 0;
	}else if(ch == 'b') {
		return 1;
	}else if(ch == 'c') {
		return 2;
	}else if(ch == 'd') {
		return 3;
	}else if(ch == 'e') {
		return 4;
	}
}
int main(){
	int n,m;
	char toChar[5]={'a','b','c','d','e'};
	cin>>n>>m;
	s s[105];
	for (int i = 0; i < m; ++i){
		for (int j = 0; j < 5; ++j){
			s[i].mark[j]=0;
			s[i].error[j]=0;
		}
	}
	for (int i = 0; i < m; ++i){
		cin>>s[i].score>>s[i].a>>s[i].b;
		for (int j = 0; j < s[i].b; ++j){
			char ch;
			scanf(" %c",&ch);
			s[i].mark[toInt(ch)]=1;
		}
		scanf("%*c");
	}
	for (int i = 0; i < n; ++i){
		int sum = 0;
		for (int j = 0; j < m; ++j){
			int b,item = 0;
			int mark[5]={0};
			scanf("%*c%d",&b);
			for (int k= 0; k < b; ++k){
				char ch;
				scanf(" %c",&ch);
				mark[toInt(ch)]=1;
			}
			for (int q = 0; q < 5; ++q)	{
				if(mark[q]==1 &&s[j].mark[q]==0) {
					s[j].error[q]++;
					item++;
				}else if(mark[q]==0 &&s[j].mark[q]==1){
					s[j].error[q]++;
				}
			}
			scanf("%*c%*c");
			if(!item) {
				if(b==s[j].b) {
					sum+=2*s[j].score;
				}else if(b < s[j].b){
					sum+=s[j].score;
				}
			}
		}
		printf("%.1f\n",sum/2.0);
	}
	int max = 0;
	for (int i = 0; i < m; ++i){
		for (int j = 0; j < 5; ++j){
			if(s[i].error[j]>max){
				max = s[i].error[j];
			}
		}
	}
	if(max) {
		for (int i = 0; i < m; ++i){
			for (int j = 0; j < 5; ++j){
				if(s[i].error[j] == max){
					printf("%d %d-%c\n",max,i+1,toChar[j]);
				}
			}
		}
	}else{
		cout<<"Too simple"<<endl;
	}
	return 0;
}
