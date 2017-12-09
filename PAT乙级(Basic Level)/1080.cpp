#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

struct stu{
    string name;
    int a=-1,b=-1,c=-1,d;
};
bool cmp(stu a,stu b){
    if(a.d==b.d){
        return a.name<b.name;
    }else{
        return a.d>b.d;
    }
}

int main(){
    int g1,g2,g3;
    map<string,stu> m;
    cin>>g1>>g2>>g3;
    for(int i=0;i<g1;i++){
        string name;
        int x;
        cin>>name>>x;
        m[name].a=x;
        m[name].name=name;
    }
    for(int i=0;i<g2;i++){
        string name;
        int x;
        cin>>name>>x;
        m[name].b=x;
        m[name].name=name;
    }
    for(int i=0;i<g3;i++){
        string name;
        int x;
        cin>>name>>x;
        m[name].c=x;
        m[name].name=name;
    }
    map<string,stu> ::iterator it;
    vector<stu> m2(10005);
    int ind=0;
    for(it=m.begin();it!=m.end();it++){
        int t;
        if(it->second.c>=it->second.b){
            t=it->second.c;
        }
        else{
            t=(int)((it->second.b*0.4+it->second.c*0.6)+0.5);
        }
        if(t>=60&&it->second.a>=200){
            m2[ind].name=it->second.name;
            m2[ind].a=it->second.a;
            m2[ind].b=it->second.b;
            m2[ind].c=it->second.c;
            m2[ind].d=t;
            ind++;
        }
    }
    sort(m2.begin(),m2.end(),cmp);
    for(int i=0;i<ind;i++){
        cout<<m2[i].name<<" "<<m2[i].a<<" "<<m2[i].b<<" "<<m2[i].c<<" "<<m2[i].d<<endl;
    }
    return 0;
}
