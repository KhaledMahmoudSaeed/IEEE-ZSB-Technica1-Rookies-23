#include <iostream>
using namespace std;
int main(){
    int num=0,n1,n2,n3,result;
    cin>>num;
    int b=0;
    int cont=15;// max of tring before losing the game
    while(cont){
            // seperating the digits
        n1=num%10;
        num/=10;
        n2=num%10;
        num/=10;
        n3=num%10;
        result=(n1*n1)+(n2*n2)+(n3*n3);//sum of squer of digits
    cout<<result<<endl;
        if (result==10 || result==100 || result==1000){
            b=0;
            break;
        }
        else{
                num=result;
b=1;
        }
        cont--;

        }
        if(b=0){
            cout<<"true"<<endl;
        }
        else if(b=1){
            cout<<"false"<<endl;
        }
	return 0;
}
