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



/*
4. Dot and arrow

Dot (.): Access members of an object.

Arrow (->): Access members through a pointer (dereference + access).

*/




struct Point { int x, y; };

Point p; 
p.x = 10; 
p.y = 20;   // dot

Point* ptr = &p;
ptr->x = 30; 
ptr->y = 40;      // arrow

cout << "p.x = " << p.x << ", p.y = " << p.y << endl;
cout << "ptr->x = " << ptr->x << ", ptr->y = " << ptr->y << endl;



/*
5. Casting
Purpose: Convert one data type into another.

Why useful: Control type conversions explicitly.

*/

double d = 9.8;
int i = (int)d;                 // C-style cast → 9

cout<<i<<endl;
int j = static_cast<int>(d);    // safer C++ cast
cout<<j<<endl;



/*

6. Address Operator &
Purpose: Get the memory address of a variable.

Why useful: Needed for pointers and references.

*/

int x = 10;
cout << &x<<endl;   // prints address (like 0x7ffee...)




/* 7. Pointer *
Purpose: Declare a pointer or dereference it (access value at address).

Why useful: Direct memory access and dynamic data structures.
*/

int xp = 10;
int* ps = &xp;          // pointer stores address of x
cout << ps<<endl;            // prints address
cout << *ps<<endl;           // dereference → prints 10

    return 0;

}