#include<iostream>
using namespace std;

//here we have to write a code that will output a binary number user will input decimal number and code will convert it into binary.


int main(){

    int input;
    cout<<"Enter Decimal Value: ";
    cin>>input;

    int base = 1;
    int bin = 0;
    //logic of conversion 
    while(input > 0){
        bin += base * (input % 2);
        base *= 10;
        input /= 2;
    }



    cout<<"Binary form is: "<<bin;






    return 0;
}