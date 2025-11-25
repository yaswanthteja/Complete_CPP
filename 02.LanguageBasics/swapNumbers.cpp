#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter a value: ";
    cin >> a;

    cout << "Enter b value: ";
    cin >> b;

    int c = a;  // store a in temp
    a = b;      // assign b to a , we can't reinitiate like this int a=b, so we are reassiging the value
    b = c;      // assign temp (old a) to b

    cout << "After swapping:" << endl;
    cout << "The value of a = " << a << endl;
    cout << "The value of b = " << b << endl;

    return 0;
}
