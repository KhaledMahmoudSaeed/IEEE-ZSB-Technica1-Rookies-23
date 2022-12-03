#include<iostream>
using namespace std;
int main (){
string s1="",s2="";
int x=0,b=1,r=0;
cin>>s1>>s2;

x=sizeof(s1)/sizeof(0);
for(int i=0;i<x;i++){
    r=s2.find(s1[i]);
    if(r==string::npos){
        b=0;
        break;
    }
    else{
        b=1;
        continue;
    }
}
if (b=0){
    cout<<"NO"<<endl;
    }
else{
    cout<<"YES"<<endl;
}



return 0;
}
