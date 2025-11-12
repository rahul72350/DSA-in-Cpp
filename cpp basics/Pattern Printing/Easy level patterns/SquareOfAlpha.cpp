#include<iostream>
using namespace std;

//as of now we were printing square of numbers here we will print square of alphabets
//so here we have to write a code that will print these patterns

//first one is: 
// a b c d e 
// a b c d e
// a b c d e
// a b c d e
// a b c d e


//second is: 


int main(){


    //first pattern

    for(int i = 0; i < 5; i++){
        for(char j = 'a'; j <= 'e'; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }



    return 0;
}