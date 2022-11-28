#include<iostream>

using namespace std;
int main (){
string x;
int y=0,b=1;
cin>>x;
y=x.length();
for(int i=0;i<=y/2;i++){
      if (x[i]==x[y-1-i]){
        b=1;
        continue;
      }
      else{
        b=0;
        break;
      }
}
if (b==1){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}





return 0;
}
