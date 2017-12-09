#include<iostream>
#include<cstdio>
using namespace std;

int toInt(char a){
    if(a=='A')return 1;
    else if(a=='B')return 2;
    else if(a=='C')return 3;
    else if(a=='D')return 4;
}

int main(){
    string str;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        char k,v;
        for(int j=0;j<4;j++){
            scanf("%*c%c%*c%c",&k,&v);
            if(v=='T'){
                cout<<toInt(k);
            }
        }
    }
}
