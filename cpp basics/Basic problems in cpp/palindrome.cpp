#include<iostream>
#include<climits>
using namespace std;

//here we have to determine whether given number is palindrome or not

int main(){

    int input;
    cout<<"enter input: ";
    cin>>input;
    int num = input;

    if(input < 0){
        cout<<"not a palindrome";
        return 0;
    }

    int ans = 0;
    
    while(input){
        int rem = input % 10;
        if(ans > INT_MAX/10){
            cout<<"integer overflow occurs";
            return 0;
        }
        ans = ans * 10 + rem;
        input /= 10;
    }

    if(num == ans){
        cout<<num<<" is a palindrome!";
    }
    else{
        cout<<num<<" is not a palindrome!";
    }


    return 0;
}