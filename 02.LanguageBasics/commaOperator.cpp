#include <iostream>

using namespace std;


/*
 Comma operator

The comma operator (,) allows you to evaluate multiple expressions in a single statement.

It evaluates expressions from left to right.

The value of the entire expression is the value of the last expression.

*/



int main(){



 int y=(3,4,6);  // always chooses right most expression output 6

 cout<<y<<endl;



    return 0;
}