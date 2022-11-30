#include<iostream>
using namespace std;
int main(){
    int y=0,s1=0,s2=0,z=0;
int x[y][y]={0};
cin>>y;
for(int i=0;i<y;i++){
    for(int j=0;j<y;j++){
        cin>>x[i][j];
        if(i==j){
            s1=s1+x[i][j];
        }
         if (i==y-j-1){
            s2=s2+x[i][j];
        }
    }
}
z=abs(s1-s2);
cout<<z;


return 0;
}
