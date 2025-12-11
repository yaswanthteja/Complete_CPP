/*
Casting
Purpose: Convert one data type into another.

Why useful: Control type conversions explicitly.

*/


#include <iostream>

using namespace std;

int main(){

    double d = 9.8;
    int i = (int)d;                 // C-style cast → 9

    cout<<i<<endl;
    
    int j = static_cast<int>(d);    // safer C++ cast
    cout<<j<<endl;



    return 0;
}
