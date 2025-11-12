#include<iostream>
using namespace std;


//here we have to print diamond

int main(){

    int input;
    cout<<"enter input: ";
    cin>>input;
    int counter = 1;

    for(int i = 1; i <= input; i++){                          // this loop will handle rows 
        
        for(int j = input-i; j > 0; j--){                      // this loop will handle left sided spaces 
            cout<<"  ";
        }
        
        for(int k = 1; k <= counter; k++){                      // this loop will print start or value 
            cout<<"* ";
        }

        counter += 2;
        cout<<endl;
    }

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