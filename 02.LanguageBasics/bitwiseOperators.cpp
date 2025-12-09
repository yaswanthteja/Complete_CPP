# include <iostream>

using namespace std;

int main(){

    cout<<"Bitwise operators"<<endl;

    int num1=5;
    int num2=8;

    cout<<"Bit wise leftshift <<: " << (num1<<1)<< endl;
    cout<<"Bit wise Rightshift >>: " << (num1>>1)<< endl;
    cout<<"Bit wise And operator &: " << (num1&num2)<< endl;
    cout<<"Bit wise OR operator |: " << (num1|num2)<< endl;
    cout<<"Bit wise XOR operator ^ : " << (num1^num2)<< endl;
    cout<<"Bit wise NOT operator ~ : " << (~num1)<< endl;


    return 0;
}