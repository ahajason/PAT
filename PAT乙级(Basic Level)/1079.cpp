#include<iostream>
#include<cstdio>
#include<sstream>
using namespace std;
string nz(string a){
    string b="";
    for(int i=0;i<a.length();i++){
        b=a[i]+b;
    }
    return b;
}
int main(){
    string a,b;
    cin>>a;
    b=nz(a);
    for(int i=0;i<10;i++){
        if(a==b){
            cout<<a<<" is a palindromic number."<<endl;
            return 0;
        }else{
            string c1="";
            int j=0;
            for(int i=a.length()-1;i>=0;i--){
                int t;
                t=a[i]+b[i]+j-'0'-'0';
                if(t==0){
                    c1='0'+c1;
                }else{
                    j=t/10;
                    char ch;
                    ch = t%10+'0';
                    c1=ch+c1;
                }
            }
            if(j) {
                char ch = j+'0';
                c1=ch+c1;
            }
            cout<<a<<" + "<<b<<" = "<<c1<<endl;
            a=c1;
            b=nz(c1);
        }
    }
    if(a==b){
            cout<<a<<" is a palindromic number."<<endl;
            return 0;
    }
    cout<<"Not found in 10 iterations."<<endl;
    return 0;
}
