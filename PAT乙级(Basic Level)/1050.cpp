#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;
bool cmp(int a,int b){
    return a>b;
}
int b[10005][10005];
int main(){
    int a[10005];
    int n;
    int flag = 0;
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>a[i];
      //a[i]=i;
    }
    sort(a,a+n,cmp);
    int c,r;
    c = (int)sqrt(n);
    r = n/c;
    while(c*r!=n){
        c--;
        r = n/c;
    }
    int q1 = c - 1;
    int q2 = r - 1;
    int q3 = 0;
    int q4 = 1;
    int j=0,k=0;
    for(int i=0;i<n;i++){
        if(flag==0){
            b[k][j] = a[i];
            if(j == q1){
                flag++;k++;q1--;
            }else{
                j++;
            }
        }else if(flag==1){
            b[k][j] = a[i];
            if(k == q2){
                flag++;j--;q2--;
            }else{
                k++;
            }
        }else if(flag==2){
            b[k][j] = a[i];
            if(j == q3){
                flag++;k--;q3++;
            }else{
                j--;
            }
        }else if(flag==3){
            b[k][j] = a[i];
            if(k == q4){
                flag=0;j++;q4++;
            }else{
                k--;
            }
        }
    }
    for(int i1 = 0;i1 < r;i1++){
        for(int i2 = 0;i2 < c;i2++){
            if(i2 != 0){
                cout<<" ";
            }
            cout<<b[i1][i2];
        }
        cout<<endl;
    }
    return 0;
}
