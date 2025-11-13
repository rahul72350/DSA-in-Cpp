#include<iostream>
using namespace std;


//here we will write a code in which take input a binary number and convert it to octal number
//here first we will convert binary to decimal then decimal to octal

int main(){

    int input;
    cout<<"enter binary number: ";
    cin>>input;

    int base = 1;
    int ans = 0;
    
    //logic of conversion binary to decimal
    while(input > 0){
        ans += base * (input % 10);
        base *= 2;
        input /= 10;
    }

    input = ans;
    ans = 0;
    base = 1;

    //logic of conversion decimal to octal
    while(input > 0){
        ans += base * (input % 8);
        input /= 10;
        base *= 10;

    }

    cout<<"octal form is: "<<ans<<endl;

   

    






    return 0;
}