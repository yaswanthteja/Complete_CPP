// C++ program to find the sum of first n natural numbers
// positive integers such as 1,2,3,...n are known as natural numbers

#include <iostream>

using namespace std;

int main() {
    int num, sum;
    sum = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

    // for (int i = 1; i <= num; ++i) {
    //     sum += i;
    // }

    // cout << "Sum = " << sum << endl;



    // using while
    int i=1;   // loop variable for initialization
    while(i<=num){   // Condition
        sum+=i;
        i++;   //updation
    }
    cout<<sum;



    return 0;
}