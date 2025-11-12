#include<iostream>
using namespace std;

//here we have to write a code that will print this pattern
// 1 1 1 1 1 
// 2 2 2 2 2
// 3 3 3 3 3
// 4 4 4 4 4
// 5 5 5 5 5

//this pattern
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5 

//this pattern
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1

// this pattern
// 1 4 9 16 25
// 1 4 9 16 25 
// 1 4 9 16 25
// 1 4 9 16 25
// 1 4 9 16 25

//and this pattern
// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25

int main(){

    //first pattern

    for(int i = 1; i <= 5; i++){                // this loop handles rows
        for(int j = 1; j <= 5; j++){            // this loop handles columns
            cout<<i<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    //second pattern
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    //third pattern
    for(int i = 0; i < 5; i++){
        for(int j = 5; j >0; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    //fourth pattern
    for(int i = 0; i < 5; i++){
        for(int j = 1; j <= 5; j++){
            cout<<j*j<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    //fifth pattern

    int num = 1;                  // this variable keep the record of printing value
    for(int i = 1; i <= 5; i++){   
        for(int j = 1; j <= 5; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }



    return 0;
}