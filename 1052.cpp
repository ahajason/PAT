#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string str[3][11]={""};
    int count[3]={0};
    for(int i=0;i<3;i++){
        string a;
        getline(cin,a);
        int length;
        int mark=0;
        for(int j=0;j<a.length();j++){
            if(a[j] == '['){
                length = 0;
                mark = 1;
            }else if(a[j] == ']'){
                mark = 0;
                str[i][++count[i]] = a.substr(j-length,length);
            }else if(mark == 1){
                length++;
            }
        }
    }
    int n;
    cin>>n;
    int judge[5]={0,1,2,1,0};
    for(int i = 0;i < n ;i++){
        int a[5];
        for(int j =0; j < 5; j++){
            cin>>a[j];
        }
        string temp="";
        for(int j =0; j < 5; j++){
           if(a[j]>count[judge[j]] || a[j]<= 0){
               temp ="Are you kidding me? @\\/@";
               break;
            }else{
                if(j==1){
                    temp += "(";
                }else if(j==4){
                    temp += ")";
                }
               temp += str[judge[j]][a[j]];
            }
        }
        cout<<temp<<endl;

    }

    return 0;
}
