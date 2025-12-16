/*
write a program to check the age and assign them based on the group

we have 3 age groups

child : 12 and below
teenage : 12 to 18
adult: 18 and above


*/


#include<iostream>

using namespace std;

int main(){

    int age;
    cout<<"Enter the age : ";
    cin >> age;

    if(age<=12){
        cout<<"Child";
    }
    else if(age>12&& age<=18){
        cout<<"teenage";
    }
    else{
        cout<<"adult";
    }

    return 0;
}