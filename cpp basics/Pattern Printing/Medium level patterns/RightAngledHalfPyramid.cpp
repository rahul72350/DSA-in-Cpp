#include<iostream>
using namespace std;


//here we have to print Right angled half pyramid.

//first pattern 

//         * 
//       * *
//     * * *
//   * * * *
// * * * * *

//second pattern

//         1
//       2 2
//     3 3 3
//   4 4 4 4
// 5 5 5 5 5

//third pattern

//         1
//       1 2
//     1 2 3
//   1 2 3 4 
// 1 2 3 4 5

//fourth pattern

//         A
//       A B
//     A B C
//   A B C D
// A B C D E

// fifth pattern

//         1
//       2 1
//     3 2 1
//   4 3 2 1
// 5 4 3 2 1


//as of now we are using hardcode values like we write 5 that is constant so we can replace it with variable also and take input from user

int main(){

    int input;
    cout<<"enter input: ";
    cin>>input;

    //first pattern

    for(int i = 1; i <= input; i++){                  //this loop handle rows
        for(int j = input; j > i; j--){               //this loop handle spaces
            cout<<"  ";
        }
        for(int k = 1; k <= i; k++){              //this loop handle printing stars
            cout<<" *";
        }
        cout<<endl;
    }

    //in above program we can print full pyramid also with the help of putting extra spaces in " * "

    cout<<endl;

    //second pattern 

    for(int i = 1; i <= input; i++){                  //this loop handle rows
        for(int j = input; j > i; j--){               //this loop handle spaces
            cout<<"  ";
        }
        for(int k = 1; k <= i; k++){              //this loop handle printing stars
            cout<<i<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    //third pattern

    for(int i = 1; i <= input; i++){                  //this loop handle rows
        for(int j = input; j > i; j--){               //this loop handle spaces
            cout<<"  ";
        }
        for(int k = 1; k <= i; k++){              //this loop handle printing stars
            cout<<k<<" ";
        }
        cout<<endl;
    }
    
    cout<<endl;

    //fourth pattern

    for(int i = 1; i <= input; i++){                  //this loop handle rows
        char c = 'A';
        for(int j = input; j > i; j--){               //this loop handle spaces
            cout<<"  ";
        }
        for(int k = 1; k <= i; k++){              //this loop handle printing stars
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }

    cout<<endl;

    //fifth pattern
    for(int i = 1; i <= input; i++){                  //this loop handle rows
        for(int j = input; j > i; j--){               //this loop handle spaces
            cout<<"  ";
        }
        for(int k = i; k > 0; k--){              //this loop handle printing stars
            cout<<k<<" ";
        }
        cout<<endl;
    }






    return 0;
}