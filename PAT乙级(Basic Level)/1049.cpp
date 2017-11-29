#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double n;
    double sum = 0;
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        double x;
        cin>>x;
        sum += x*(i+1)*(n-i);
    }
    cout<<fixed<<setprecision(2)<<sum;
    return 0;
}
