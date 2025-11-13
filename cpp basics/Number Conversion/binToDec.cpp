#include<iostream>
using namespace std;


//here we will write code that will take binary number as input and ouput decimal number

int main(){


    int input;
    cout<<"enter binary number: ";
    cin>>input;
    int base = 1;
    int ans = 0;

    //logic of conversion 
    while(input > 0){
        ans += base * (input % 10);
        base *= 2;
        input /= 10;
    }

   

    cout<<"answer is: "<<ans;






    return 0;
}