#include<iostream>
using namespace std;


//here we have to print full pyramid pattern problems

//first pattern
//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *

//second pattern

//         1
//       1 2 1
//     1 2 3 1 2
//   1 2 3 4 1 2 3
// 1 2 3 4 5 1 2 3 4

int main(){


    int input;
    cout<<"enter input: ";
    cin>>input;
    int counter = 1;

    for(int i = 1; i <= input; i++){                          // this loop will handle rows 1 2 3 4 5
        
        for(int j = input-i; j > 0; j--){                      // this loop will handle left sided spaces  4 3 2 1
            cout<<"  ";
        }
        
        for(int k = 1; k <= counter; k++){                      // this loop will print start or value 
            cout<<"* ";
        }

        counter += 2;
        cout<<endl;
    }


    //second pattern 

        for(int i = 1; i <= input; i++){                  //this loop handle rows
        for(int j = input; j > i; j--){               //this loop handle spaces
            cout<<"  ";
        }
        for(int k = 1; k <= i; k++){              //this loop handle printing stars
            cout<<k<<" ";
        }
        for(int l = 1; l < i; l++){
            cout<<l<<" ";
        }
        cout<<endl;
    }


    return 0;
}