#include<iostream>
using namespace std;

//here we have to write a code that will print inverted pyramid like this

// * * * * * * * * *
//   * * * * * * *
//     * * * * * 
//       * * *
//         *

int main(){

    
    int input;
    cout<<"enter input: ";
    cin>>input;

    cout<<endl;
  
    for(int row = input; row > 0; row--){

        for(int col = 0; col < input - row; col++){
            cout<<"  ";
        }
        for(int col = 1; col <= (row * 2) - 1; col++){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl;



    return 0;
}