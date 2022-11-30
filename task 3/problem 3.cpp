#include<iostream>
using namespace std;
int main(){
int y=0,x=0,z=0,s1=0,s2=0;
cin>>y;
while(y--){
cin>>x>>z;
s1=s1+x;
s2=max(s2,z);

}
s1=s1/2;
if(s1<=s2){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

return 0;
}
