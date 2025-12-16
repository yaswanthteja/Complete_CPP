//divisible by 3 and 5


#include <iostream>

using namespace std;

int main(){

    int num;

    cout <<"Enter a number: ";

    cin>>num;

    if(num%3==0 && num%5==0){
        cout<<num << " is divisble by 3 and 5 ";
    }
    else{
        cout<<"not divisble by both ";
    }

    return 0;
}