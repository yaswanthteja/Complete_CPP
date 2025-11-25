#include <iostream>

using namespace std;

int main(){

    int num1=10;
    int num2=5;

    cout<<"before reassiging num1: "<<num1<<endl;
    num1=15;   // reinitilaize num1
    cout<<"After reassiging num1: "<<num1<<endl;

    cout<<"adding and assigning 5 to num2:  "<<(num2+=5)<<endl;
    cout<<"substracting and assiging 5 to num2: "<<(num2-=5)<<endl;
    cout<<"Multipling and assiging 5 to num1: "<<(num1*=5)<<endl;
    cout<<"dividing and assigning 5 to num1: "<<(num1/=5)<<endl;
    cout<<"Modulo and assigning 5 to num1: "<<(num1%=5)<<endl;

    return 0;

}