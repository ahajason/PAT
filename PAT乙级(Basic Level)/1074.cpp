#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    string n,a,b,c;
    cin>>n>>a>>b;
    int jinwei=0,sum=0,weishu=1;
    int time = 21;
    while(n.length()<=21){
        n='0'+n;
    }
    while(a.length()<=21){
        a='0'+a;
    }
    while(b.length()<=21){
        b='0'+b;
    }
    for(int i = 21;i>=0;i--){
        int item,t=(n[i]-'0');
        if(t==0)t=10;
        item = a[i]+b[i]+jinwei-'0'-'0';
        jinwei=item/t;
        char temp;
        temp=item%t+'0';
        c=temp+c;
    }
    int flag = 0;
    for(int i = 0;i < 22;i++){
        if(flag){
            cout<<c[i];
        }else if(c[i]-'0'){
            cout<<c[i];
            flag=1;
        }
    }
    if(!flag)cout<<0;
    return 0;
}