#include<iostream>

using namespace std;
int main(){
int x=0,y=0,m1=0,m=0,m2=0,m3=0;

cin>>x>>y;

int a[x]={0};
int f[9]={0};

for(int i=0;i<x;i++){
  cin>>a[i];
     f[a[i]]++;
}
for(int i=0;i<9;i++){
    m1=max(f[i],f[i+1]);
 if(m1>m){
    m=i;
    }}

for(int i=0;i<9;i++){
    m2=max(f[i],f[i+1]);
 if(m2>m3 &&m2!=m1){
    m3=i;
    }}
cout<<m3<<" "<<m;

return 0;
}
