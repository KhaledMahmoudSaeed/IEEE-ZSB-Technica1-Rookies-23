#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int y[]={0};
    int i=0;
    int x[12]={1,1,2,3,4,4,5,6,7,7,8,9};
while(i<=12){
     if(x[i]==x[i+1]){
y[i]=x[i];
i=i+2;
cout<<y[i]<<endl;
   }
   else if (x[i]!=x[i+1]){
    y[i]=x[i];
    cout<<y[i]<<endl;
    i++;
   }
}
   for(int i=0;i<10;i++){
    cout<<y[i]<<" ";
   }


    return 0 ;
}
