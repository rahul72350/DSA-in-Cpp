#include<iostream>
using namespace std;


//here we will take input form user and then we have to tell that number is prime or not

int main(){


    int input;
    cout<<"enter number: ";
    cin>>input;

    if(input < 2){
        cout<<input<<" is not a prime number";
        return 0;
    }
    //here i noticed that we don't need to iterate a loop till input we just need to check till square root of input
    
    int sqrt;

    for(int i = 1; i < input; i++){
        if(i*i <= input){
            sqrt = i;
        }
        else{
            break; //break keyword is used to break the loop
        }
       
    }

   //may be this method inefficient method to find squre root of number but for now it's ok


    for(int i = 2; i < sqrt; i++){
        if(input % i == 0){
            cout<<input<<" is not a prime number";
            return 0;
        }
    }

    cout<<input<<" is a prime number";



    return 0;
}