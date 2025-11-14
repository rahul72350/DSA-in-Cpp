#include<iostream>
using namespace std;

//here we have to return complement of given number like input = 1010 (10) => 0101 (5)


int main(){

    int input;
    cout<<"enter input: ";
    cin>>input;

    if(input == 0){
        return 1;
    }

    int ans = 0;
    int mul = 1;

    while(input){
        int rem = input % 2;

        //we can also use xor operation
        if (rem == 1){
            rem = 0;
        }
        else{
            rem = 1;
        }

       ans += rem*mul;
       mul *= 2;
       input /= 2;
    }

    cout<<ans;

    



    return 0;
}