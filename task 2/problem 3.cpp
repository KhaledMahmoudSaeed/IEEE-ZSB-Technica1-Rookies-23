#include<iostream>
#include<string.h>
using namespace std;
void ins(int x[],int y){
int z=0,j=0;
for (int i=1;i<y;i++){
   z=x[i];
   j=i-1;

   while(j>=0&&x[j]>z){
    x[j+1]=x[j];
    j=j-1;
   }
   x[j+1]=z;

}

