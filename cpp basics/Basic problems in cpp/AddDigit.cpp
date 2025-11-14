#include<iostream>
using namespace std;

//here we have to add digit and return sum of digit but there is a twist we have to return sum in single digit like 275 = 14 = 5 so we have to return 5

int main(){


    int input;
    cout<<"enter input: ";
    cin>>input;

    int ans = 0;

    while(input>9){
        ans = 0;
        while(input){
        int rem = input % 10;
        ans += rem;
        input /= 10;
    }
    input = ans;
    }

  

    cout<<"answer is: "<<ans;


    return 0;
}