#include<iostream>
using namespace std;

//here we have to take base and exponent as a input and print it's result

int main(){

    int base;
    cout<<"enter base: ";
    cin>>base;
    int expo;
    cout<<"enter exponent: ";
    cin>>expo;


    int result = 1;

    for(int i = 0; i < expo; i++){
        result *= base;
    }

    cout<<result;






    return 0;
}