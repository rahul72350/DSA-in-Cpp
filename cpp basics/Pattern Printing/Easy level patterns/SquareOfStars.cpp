#include<iostream>
using namespace std;


//this is Day 03 of 180 days DSA in c++ code challenge.

// here we have to write a code that will print this pattern 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 


int main(){

    for(int i = 0; i < 5; i++){                // this loop handles rows
        for(int j = 0; j < 5; j++){            // this loop handles columns
            cout<<"* ";
        }
        cout<<endl;
    }




    return 0;
}