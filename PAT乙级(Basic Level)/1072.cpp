#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int N,M,count=0,sum=0;
    int a[6];
    cin>>N>>M;
    for(int i=0;i<M;i++){
        cin>>a[i];
    }
    for(int i=0;i<N;i++){
        string str;
        int num,item=0;
        cin>>str>>num;
        for(int j=0;j<num;j++){
            int x,k;
            cin>>x;
            for(k=0;k<M;k++){
                if(a[k]==x){
                    break;
                }
            }
            if(k<M){
                if(item==0){
                    cout<<str<<":";
                    count++;
                }
                printf(" %04d",x);
                item++;
            }
        }
        if(item){
           cout<<endl;
        }
        sum+=item;

    }
    cout<<count<<" "<<sum;
    return 0;
}
