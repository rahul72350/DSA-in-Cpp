#include<iostream>
using namespace std;

//here we have to print half inverted pyramid

//first
// * * * * *
// * * * *
// * * *
// * *
// *

//second 
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1



int main(){

    //first pattern code

    for(int i = 5; i > 0; i--){
        for(int j = 0; j < i; j++){
            cout<<"* ";
        }   
     cout<<endl;
    }

    cout<<endl;

    //second pattern is: 

    for(int i = 5; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }


    
    return 0;
}