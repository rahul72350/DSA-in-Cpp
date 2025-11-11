#include<iostream>
using namespace std;

//here we will write a code that will print all english alphabets



int main(){


    //small letters
    for(char letter = 'a'; letter <= 'z'; letter++){
        cout<<letter<<" ";
    }

    cout<<endl;

    //capital letters
    for(char letter = 'A'; letter <= 'Z'; letter++){
        cout<<letter<<" ";
    }

    return 0;
}