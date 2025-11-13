#include<iostream>
using namespace std;

//here we will write code that will take octal number as input and ouput decimal number

int main(){
 
    int input;
    cout<<"enter octal value: ";
    cin>>input;
    int ans = 0;
    int base = 1;

    //logic of conversion 
    while(input > 0){
        ans += base * (input % 10);
        input /= 10;
        base *= 8;

    }

    cout<<"decimal form is: "<<ans<<endl;




    return 0;
}
