#include<iostream>
using namespace std;


int main(){


    int input;
    cout<<"enter input: ";
    cin>>input;
    
    if(input<1){
        cout<<"not a power of 2"<<endl;
    }

    while(input != 1){
        if(input % 2 == 1){
            cout<<"not a power of 2"<<endl;
            return 0;
        }
        
            input /= 2;
       
    }

    cout<<"power of 2"<<endl;


    return 0;
}