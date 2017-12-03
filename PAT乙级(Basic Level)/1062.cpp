#include <iostream>
#include <cstdio>
using namespace std;
bool fun(int a,int b){
  int c;
  while( a%b != 0 ) {
      c = a%b;
      a = b;
      b = c;
    }
    return !(c-1);
}
int main(){
  int a1,a2,b1,b2,c;
  scanf("%d%*c%d %d%*c%d %d",&a1,&a2,&b1,&b2,&c);
  double a = a1*1.0/a2,b = b1*1.0/b2;
  int flag = 0;
  double t;
  if(a>b) {
    t = a;
    a = b;
    b = t;
  }
  for (int i = (int)(a*c) - 1; i < (int)(b*c)+1; ++i){
    if(i*1.00 <= a*c + 0.0000001 || i*1.00 >= b*c - 0.0000001) {
      continue;
    }
    if(fun(i,c)) {
      if(flag) {
        cout<<" "<<i<<"/"<<c;
      }else{
        cout<<i<<"/"<<c;
        flag=1;
      }
    }
  }
  return 0;
}