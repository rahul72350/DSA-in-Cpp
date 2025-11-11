#include<iostream>
using namespace std;


int main(){
    
    int input;
    cout<<"enter input: ";
    cin>>input;

    int fact = 1;

    for(int i = 1; i <= input; i++)
    fact *=  i;

    cout<<fact;


    return 0;
}