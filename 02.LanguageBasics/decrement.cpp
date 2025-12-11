/*
Decrement (--)

Decreases value by 1.

  Pre‑decrement (--x) → decrements first, then uses the value.
  Post‑decrement (x--) → uses the value first, then decrements.

*/

#include <iostream>
using namespace std;

int main() {
    int a = 10;

    cout << "Pre-decrement: " << --a << endl;  // a becomes 9, prints 9
    cout << "Post-decrement: " << a-- << endl; // prints 9, then a becomes 8
    cout << "Final value of a: " << a << endl; // prints 8

    // decrement with pointers

    int arr[3] = {10, 20, 30};
    int* p = &arr[2];   // points to last element (30)

    cout << *p << endl;   // 30
    p--;                  // move to previous element
    cout << *p << endl;   // 20

    return 0;
}
