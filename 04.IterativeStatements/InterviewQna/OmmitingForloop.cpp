#include<iostream>
using namespace std;

int main(){

  
    int sum=0;

   /* 
   

   syntax of for loop


   for( initialization ; condition ; updation ){
   }
   
   we can ommit these but be cautious we have to place ;
   
   // ommiting initialization


    int i=1;  // here we can initialize outside also

    for( ;i<=5;i++){
        sum+=i;
    }

    cout<<sum;

    */


    // ommiting updation statement
    for(int i=1;i<=5;){
        sum+=i;
        i++;

    }
    cout<<sum;

    // if we ommit condition it will execute endless 





    return 0;
}
