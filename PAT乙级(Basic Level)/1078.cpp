#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    string a;
    getline(cin,a);
    if(a=="C"){
        string str;
        getline(cin,str);
        int count=0;
        for(int i=1;i<str.length();i++){
            if(str[i]==str[i-1]){
                count++;
            }else{
                if(count)cout<<count+1;
                cout<<str[i-1];
                count=0;
            }
        }
        if(count)cout<<count+1;
        cout<<str[str.length()-1];
        count=0;
    }else if(a=="D"){
        string str;
        getline(cin,str);
        int count=0;
        for(int i=0;i<str.length();i++){
            if(str[i]>='0'&&str[i]<='9'){
                count=count*10+str[i]-'0';
            }else{
                while(count>1){
                    cout<<str[i];
                    count--;
                }
                cout<<str[i];
                count=0;
            }
        }
    }
    return 0;
}
