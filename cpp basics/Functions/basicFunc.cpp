#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//from today we will understand the concept of function let's start
//what is function and why do you need of function 
//function is block of code or instruction that executed when user calling it so it provide us reusability and help to write code in modulars and provide readablitiy.
//suppose you want to is 4 prime? then is 5 prime? and so on so do you like to every time write a logic for different inputs i think no so here function comes
//to resolve your problem.



bool isprime(int input){

    if(input < 2){
        return false;
    }

    // i have noticed one thing when we did this same problem earlier we write a extra logic to find the sqrt of input then iterate the loop but we can do i * i this also.

    for(int i = 2; i * i < input; i++){
        if(input % i == 0){
            return false;
        }
    }

    return true;
}


//we have declare and define the function so now we can call the function with input it will return you true or false you can reuse the function and it's provide readability.
//many people are confused about arguements and parameters let's clear the confusion

// Parameters: variables listed in function definition.

// Arguments: values passed during function call.

//parameter passing mechanism: call by reference and call by value

//call by reference

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}


int main(){

    int a = 10;
    int b = 30;
    cout<<"value of a before swapping called: "<<a<<endl;
    cout<<"value of b before swapping called: "<<b<<endl<<endl;
    swap(a,b);
    cout<<"value of a after swapping called: "<<a<<endl;
    cout<<"value of b after swapping called: "<<b<<endl;








    return 0;
}