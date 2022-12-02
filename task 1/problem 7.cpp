#include<iostream>
#include<cstring>
using namespace std;
int main(){
int x;
bool b=1;
cin>>x;
int v=x;
int r=0;
while (x!=0){

r =r*10;
r =r+x%10;
x=x/10;
}

while(x){
    if (x%10==r%10){
        x=x/10;
        r=r/10;
        b=1;
        continue;
    }
    else{
        b=0;
        break;
    }}
    if (b==1){
        cout<<v<<'\n'<<"YES"<<endl;
    }
    else if (b==0){
        cout<<r<<'\n'<<"NO"<<endl;
    }
        return 0;
}
