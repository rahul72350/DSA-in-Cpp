#include<iostream>
using namespace std;


//here we to write a code that will find approximate root of given input

int main(){

    int input;
    cout<<"enter input: ";
    cin>>input;

    int i = 1;
    while(i * i <= input){
        i++;
    }

    cout<<i-1;


    return 0;
}