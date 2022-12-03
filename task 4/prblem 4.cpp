#include<iostream>
using namespace std;
int main(){
int x=0;
int y[x]={0};
cin>>x;
for(int i=0;i<x;i++){
    cin>>y[i];
    y[i]+=1;
}
for(int i=0;i<x;i++){
    cout<<y[i]<<" ";
}

return 0;}
