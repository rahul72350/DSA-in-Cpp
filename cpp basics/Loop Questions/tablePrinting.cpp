#include<iostream>
using namespace std;


//here we have to take input form user then print table of given input

int main(){

    int input;
    cout<<"enter input: ";
    cin>>input;

    for(int i = 1; i <= 10; i++){
        cout<<input*i<<endl;
    }




    return 0;
}