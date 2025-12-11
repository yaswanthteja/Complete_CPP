


/*
 Dot and arrow

Dot (.): Access members of an object.

Arrow (->): Access members through a pointer (dereference + access).


memory

Dot (.) → “I have the object in my hand.”

Arrow (->) → “I only have the address, so I follow the arrow to reach the object.”


*/

#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

int main() {
    // Using dot operator
    Point p;        // create an object
    p.x = 10;       // access members directly
    p.y = 20;

    cout << "Using dot: p.x = " << p.x << ", p.y = " << p.y << endl;

    // Using arrow operator
    Point* ptr = &p;   // pointer to object
    ptr->x = 30;       // access members through pointer
    ptr->y = 40;

    cout << "Using arrow: ptr->x = " << ptr->x << ", ptr->y = " << ptr->y << endl;

    // Show that both refer to the same object
    cout << "Final values in p: p.x = " << p.x << ", p.y = " << p.y << endl;

    return 0;
}
