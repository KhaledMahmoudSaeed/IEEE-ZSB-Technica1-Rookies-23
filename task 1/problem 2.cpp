#include<iostream>

using namespace std ;
int findSum(int A[], int N)
{
    if (N < 0)
        return 0;
    return (findSum(A, N - 1) + A[N - 1]);
}
int main(){
int x,y,s=0;
cin>>x;
int a[x]={0};
for(int i=0;i<x;i++){
    cin>>a[i];
     s=s+a[i];
}
    cout<<s<<endl;
    s=0;
while(x--){
     s=s+a[x];

}
    cout<<s<<endl;
s=0;

    cout<<findSum(a,x)<<endl;
return 0;
}
