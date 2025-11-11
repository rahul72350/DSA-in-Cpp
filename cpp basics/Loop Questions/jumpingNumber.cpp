#include<iostream>
using namespace std;


//here we have to print number by taking 3 steps

int main(){

    int input;
    cout<<"enter input: ";
    cin>>input;

    for(int i = 1; i < input; i = i + 3)
    cout<<i<<" ";



    return 0;
}