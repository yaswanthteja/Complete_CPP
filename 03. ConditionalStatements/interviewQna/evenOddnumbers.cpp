#include <iostream>

using namespace std;

int main(){

    int num;
    cout<<"Enter a number: "<<endl;
    cin >>num;     //takes input

    if (num%2==0){     
        cout<<"The given number : " <<num <<" is even";
    }else{
        cout<<"The given number : "<< num << " is odd";
    }

    return 0;

}