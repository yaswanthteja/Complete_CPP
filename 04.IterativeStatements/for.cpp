// print n numbers

#include<iostream>

using namespace std;

int main(){

    // prints upto 5 numbers 
    // for(int i=0;i<5;i++){
    //     cout<<i<<' '; // prints 0 to 4 on same line

    // }

    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=0;i<=n;i++){
        cout<<i<<endl; // print upto n numbers on new line
    }

    return 0;
}