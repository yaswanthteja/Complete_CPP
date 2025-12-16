// find even and odd using ternary operator

#include <iostream>

using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<(num%2==0?"even":"odd");  //using ternary condition ? true expression: false expression

    return 0;
}