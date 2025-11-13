#include<iostream>
using namespace std;


//here we will write a code in which take input a octal number and convert it to binary number
//here first we will convert octal to decimal then decimal to binary

int main(){

    int input;
    cout<<"enter octal number: ";
    cin>>input;

    int ans = 0;
    int base = 1;

    //logic of conversion octal to decimal

    while(input > 0){
        ans += base * (input % 10);
        input /= 10;
        base *= 8;

    }

    input = ans; 
    base = 1;
    int bin = 0;

    //logic of conversion decimal to bin
    
    while(input > 0){
        bin += base * (input % 2);
        base *= 10;
        input /= 2;
    }



    cout<<"Binary form is: "<<bin;


    return 0;
}