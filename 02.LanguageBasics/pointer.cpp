

/*  Pointer *
Purpose: Declare a pointer or dereference it (access value at address).

Why useful: Direct memory access and dynamic data structures.

& → gives the address of a variable.

* → dereferences a pointer (accesses value at address).

Pointers let you directly work with memory.

Very powerful for arrays, dynamic memory, and data structures (linked lists, trees).
*/



#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* p = &x;

    cout << "Address of x: " << p << endl;
    cout << "Value of x: " << *p << endl;

    *p = 25;   // change value via pointer
    cout << "New value of x: " << x << endl;

    return 0;
}




