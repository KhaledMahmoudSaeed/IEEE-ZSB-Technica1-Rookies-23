#include<iostream>

using namespace std ;

int main(){
int x,y;
    int a=0;
cin>>x;
for (int i=0;i<=x;i++){
    if (i%3==0||i%5==0){
        a=a+i;
        continue;
    }
}

cout<<a;
return 0;
}
