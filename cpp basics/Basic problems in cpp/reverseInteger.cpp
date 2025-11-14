#include<iostream>
#include<climits>
using namespace std;


//here we have to reverse the given integer.


int main(){
    int input;
    cout<<"enter input: ";
    cin>>input;

    int num = input; //just for better output

    int ans = 0;
   

    while(input){
        int rem = input % 10;

        if(ans > INT_MAX/10 || ans < INT_MIN/10)    //handling integer oveflow problem
        return 0;
       

        ans = ans * 10 + rem;
        input /= 10; 
       
    }

    cout<<"reversed integer of "<<num<<" =====> "<<ans<<endl;


    return 0;
}