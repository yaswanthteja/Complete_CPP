#include <iostream>

using namespace std;

int main(){

    /*  
1. sizeof()  -> gives us the size 

    int a =4;
    cout<<"size of a is "<< sizeof(a)<<endl; // 4

    */

/*

 2. ternary operator

// condition ? expression1:expression2  -> if condition is true expression 1 else expression 2

int actual_num;

cout<<(actual_num==5?actual_num=4:actual_num=5)<<endl;


// ternary operator example: choose larger number
int a = 5;
int b = 4;

int larger = (a > b) ? a : b;
cout << "Larger number is " << larger << endl;

// ternary operator example: parity check
cout << a << " is " << ((a % 2 == 0) ? "even" : "odd") << endl;

*/



/*
3.  Comma operator

The comma operator (,) allows you to evaluate multiple expressions in a single statement.

It evaluates expressions from left to right.

The value of the entire expression is the value of the last expression.

*/



// int y=(3,4,6);  // always chooses right most expression

// cout<<y<<endl;




    return 0;

}