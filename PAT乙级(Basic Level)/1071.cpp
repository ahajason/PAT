#include<iostream>
using namespace std;
int main(){
    int K,T;
    cin>>K>>T;
    for(int i=0;i<T;i++){
        int n1,b,t,n2;
        cin>>n1>>b>>t>>n2;
        if(t>K){
            cout<<"Not enough tokens.  Total = "<<K<<"."<<endl;
        }else{
            int a = n1<n2;
            if((a&&b)||((!a)&&(!b))){
                K+=t;
                cout<<"Win "<<t<<"!  Total = "<<K<<"."<<endl;
            }else{
                K-=t;
                cout<<"Lose "<<t<<".  Total = "<<K<<"."<<endl;
                if(K == 0){
                    cout<<"Game Over."<<endl;
                    break;
                }
            }
        }

    }
    return 0;
}
