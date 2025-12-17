

/*

do while

Similar to while, but guarantees at least one execution (condition checked after body).



syntax:

do {
   // body of loop;
}
while (condition);



Body executes → condition checked → repeat if true.

*/


#include<iostream>

using namespace std;

int main(){

    int i=1;
    do{
        cout<<i<<endl;
        ++i;
    }while(i<=5);

    return 0;
}



