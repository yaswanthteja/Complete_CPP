/*
Increment

Increases value by 1.
Works with integers, characters, and even pointers.

  Pre‑increment (++x) → increments first, then uses the value.
  Post‑increment (x++) → uses the value first, then increments.

*/

#include <iostream>
using namespace std;

int main() {
    int a = 10;

    cout << "Pre-increment: " << ++a << endl;  // a becomes 11, prints 11
    cout << "Post-increment: " << a++ << endl; // prints 11, then a becomes 12
    cout << "Final value of a: " << a << endl; // prints 12


    //increment  with pointers

    int arr[3] = {10, 20, 30};
    int* p = arr;

    cout << *p << endl;   // 10
    p++;                  // move to next element
    cout << *p << endl;   // 20

    return 0;
}
