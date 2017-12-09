#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n;
    double m;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        double a,sum=0,max=-1,min=500,count=0;
        double x;
        cin>>a;
        for(int j=0; j<n-1; j++){
            cin>>x;
            if(x>=0&&x<=m){
                count++;
                if(x>=max){
                    max=x;
                }
                if(x<=min){
                    min=x;
                }
                sum+=x;
            }
        }
        double g;
        g=(sum-max-min)/(count-2);
        int o;
        o=(int)((g+a)/2+0.5);
        cout<<o<<endl;
    }
    return 0;
}
