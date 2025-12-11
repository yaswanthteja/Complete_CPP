 /*
  ternary operator

// condition ? expression1:expression2  -> if condition is true expression 1 else expression 2

*/


#include <iostream>
using namespace std;

int main(){

    int actual_num;   

    cout<<(actual_num==5?actual_num=4:actual_num=5)<<endl;     //5

   /*
  -   In a ternary operator, the condition is checked as a boolean.

  -   Since (actual_num = 5) evaluates to 5, and any non‑zero value is treated as true, the condition is true hence true block executes which is 4.

  -   = assigns a value and returns that value.

  -   == compares values and returns true (1) or false (0).
   
   */

    // ternary operator example: choose larger number
    int a = 5;
    int b = 4;

    int larger = (a > b) ? a : b;
    cout << "Larger number is " << larger << endl;



    // ternary operator example: parity check
    cout << a << " is " << ((a % 2 == 0) ? "even" : "odd") << endl;

    return 0;

}
