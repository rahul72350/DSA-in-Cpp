#include<iostream>
using namespace std;


//here we have to write a program that will print this(hollow butterfully pattern) pattern

// ********
// ***  ***
// **    **
// *      *
// **    **
// ***  ***
// ********
  






int main(){

    int n;
    cout<<"enter input: ";
    cin>>n;
   

    cout<<endl<<endl<<endl<<endl;

    for(int i = 1; i <= n; i++){
        for(int j = n-i+1; j >= 1; j--){
            cout<<"* ";
        }

        for(int k = 1; k <= 2*(i-1); k++){
         cout<<"  ";
        }

        for(int l = 1; l <= n-i+1; l++){
            cout<<"* ";
        }
        cout<<endl;
    }


    for(int i = n; i >= 1; i--){
        for(int j = n; j >= i ; j--){
            cout<<"* ";
        }
        for(int k = 1; k <= 2*(i-1); k++){
            cout<<"  ";
        }
        for(int l = 1; l <= (n-i)+1; l++){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl<<endl<<endl<<endl;
    return 0;
}

