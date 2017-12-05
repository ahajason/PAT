#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
struct node{
    int data;
    int next;
};
int main(){
    int s,n,k;
    cin>>s>>n>>k;
    vector<node> v(100005);
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        cin>>v[temp].data>>v[temp].next;
    }
    int j=0,i=s;
    while(i!=-1){
        if(v[i].data<0){
            if(j){
                printf(" %05d\n%05d %d",i,i,v[i].data);
            }else{
                printf("%05d %d",i,v[i].data);
            }
            j++;
        }
        i=v[i].next;
    }
    i=s;
    while(i!=-1){
        if(v[i].data>=0&&v[i].data<=k){
            if(j){
                printf(" %05d\n%05d %d",i,i,v[i].data);
            }else{
                printf("%05d %d",i,v[i].data);
            }
            j++;
        }
        i=v[i].next;
    }
    i=s;
    while(i!=-1){
        if(v[i].data>k){
            if(j){
                printf(" %05d\n%05d %d",i,i,v[i].data);
            }else{
                printf("%05d %d",i,v[i].data);
            }
            j++;
        }
        i=v[i].next;
    }
    cout<<" "<<"-1";
    return 0;
}
