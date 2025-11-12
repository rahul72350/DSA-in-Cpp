#include<iostream>
using namespace std;

//here we have to print right angle triangle pattern

//first is: 
// * 
// * *
// * * *
// * * * *
// * * * * *

//second is: 
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

// third is:
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

//fourth is: 
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1

//fifth pattern is: 
// a
// a b
// a b c
// a b c d
// a b c d e

int main(){

    //first pattern

    for(int i = 0; i < 5; i++){
        for(int j = 0; j <= i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl;

    //second pattern

    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    //third pattern

    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    //fourth pattern

    for(int i = 1; i <= 5; i++){
        for(int j = i; j > 0; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    //fifth pattern
    for(int i = 0; i < 5; i++){
        char alpha = 'a';
        for(int j = 0; j <= i; j++){
            cout<<alpha<<" ";
            alpha++;
        }
        cout<<endl;
    }
    
    cout<<endl;

    //sixth pattern is: 

    for(int i = 5; i > 0; i--){
        for(int j = 5; j >= i; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }


    return 0;
}