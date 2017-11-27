//int有两个点过不了要用longlong
#include <iostream>
#include <cstdio>
using namespace std;
void pre(long long a1,long long b1){
  long long flag = 1;
  if( a1 < 0 ) {
    flag = -1;
    a1 = -a1;
    cout<<"(-";
  }
  long long k = a1/b1;
  a1 = a1%b1;
  if( k ) {
    cout<<k;
  }
  long long a = a1, b = b1;
  long long c;
  if( a*b ) {
    while( a%b != 0 ) {
      c = a%b;
      a = b;
      b = c;
    }
    a1 /= c;
    b1 /= c;
    if( k ){
      cout<<" ";
    }
    cout<<a1<<"/"<<b1;
  }else if( !k ) {
    cout<<k;
  }
  if(flag == -1) {
    cout<<")";
  }
}

int main(){
  long long a1,b1,a2,b2,a3,b3;
  scanf("%ld/%ld %ld/%ld",&a1,&b1,&a2,&b2);
  a3 = a1*b2 + a2*b1;
  b3 = b1*b2;
  pre(a1,b1);
  cout<<" + ";
  pre(a2,b2);
  cout<<" = ";
  pre(a3,b3);
  cout<<endl;

  a3 = a1*b2 - a2*b1;
  b3 = b1*b2;
  pre(a1,b1);
  cout<<" - ";
  pre(a2,b2);
  cout<<" = ";
  pre(a3,b3);
  cout<<endl;

  a3 = a1*a2;
  b3 = b1*b2;
  pre(a1,b1);
  cout<<" * ";
  pre(a2,b2);
  cout<<" = ";
  pre(a3,b3);
  cout<<endl;

  a3 = a1*b2;
  b3 = b1*a2;
  pre(a1,b1);
  cout<<" / ";
  pre(a2,b2);
  cout<<" = ";
  if( b3 > 0) {
    pre(a3,b3);
  }else if( b3 == 0){
    cout<<"Inf";
  }else{
    pre(-a3,-b3);
  }
  cout<<endl;
  return 0;
}