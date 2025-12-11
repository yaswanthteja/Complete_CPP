/*

logical complement (!)
The logical complement operator flips a boolean value:

true → false

false → true

It is often used in conditions to check the opposite of something.

*/


#include <iostream>

using namespace std;

int main(){

    bool flag = true;
    cout << !flag<<endl;   // Output: 0 (false)

    int x = 0;
    cout << !x <<endl;   // Output: 1 (true, because 0 means false)

    int y = 5;
    cout << !y <<endl;   // Output: 0 (false, because non-zero means true)

   
    if (!x) {   // !x → true, since x=0
        cout << "Condition is true" <<endl;   // This will print
    }


}