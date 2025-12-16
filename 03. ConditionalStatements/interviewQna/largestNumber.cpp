// find the largest amoung the 3 numbers

#include <iostream>

using namespace std;

int main(){

    double num1,num2,num3;
    cout <<"Enter the  3 numbers: "<<endl;
    cin>>num1>>num2>>num3;

    if (num1>num2 && num1>num3){
        cout<<num1 <<" is greater than "<<num2 <<"and"<<num3;
    }
    else if(num2>num1 && num2>num3){
        cout<<num2 <<" is greater than "<<num1 <<"and"<<num3;
    }
    else{
        cout<<num3 <<" is greater than "<<num1 <<"and"<<num2;
    
    }


    return 0;
}