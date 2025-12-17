
/*
ranged for loop

In C++ 11, a new range-based for loop was introduced to work with collections such as arrays and vectors.

Its syntax is:

for (variable : collection) {
    // body of loop
}

example
num_array[]={}
for(int i: num_array){
}

*/



#include<iostream>

using namespace std;

int main(){

    //array
    int num_array[]={1,2,3,4,5};
    //ranged array
    for(int n:num_array){
        cout<<n<<endl;
    }

    return 0;
}