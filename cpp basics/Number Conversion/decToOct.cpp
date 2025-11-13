#include<iostream>
using namespace std;

//here we will write code that will take decimal number as input and ouput octal number

int main(){
 
    int input;
    cout<<"enter decimal value: ";
    cin>>input;
    int ans = 0;
    int base = 1;

    while(input > 0){
        ans += base * (input % 8);
        input /= 10;
        base *= 10;

    }

    cout<<"octal form is: "<<ans<<endl;




    return 0;
}