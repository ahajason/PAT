#include <iostream>
#include <cstdio>
#include <sstream>
#include <cstring>
using namespace std;
string toMar(int x){
	string ge[13] = {"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
	string shi[13] = {"tret","tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
	int a,b;
	a = x/13;
	b = x%13;
	if(a*b) {
		return shi[a]+" "+ge[b];
	}else if(a){
		return shi[a];
	}else if(b){
		return ge[b];
	}else{
		return ge[0];
	}
}
int toNum(string str){
	string ge[13] = {"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
	string shi[13] = {"tret","tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
	for (int i = 0; i < 13; ++i)
	{
		if(str == ge[i]) {
			return i;
		}else if(str == shi[i]){
			return i*13;
		}
	}
	return -1;
}
int main()
{
	int n;
	scanf("%d\n",&n);
	for(unsigned i = 0; i < n; ++i) {
		string str,a,b;
		int x,flag = 0;
		stringstream ss;
		getline(cin,str);
		if(str[0]>='0' && str[0]<='9') {
			ss<<str;
			ss>>x;
			cout<<toMar(x)<<endl;
		}else{
			if(str.length() <= 3) {
				cout<<toNum(str)<<endl;
			}else{
				a = str.substr(0,str.find(" "));  
    			b = str.substr(str.find(" ") + 1);
    			cout<<toNum(a)+toNum(b)<<endl; 
			}
		}
	}
	return 0;
}
