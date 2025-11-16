#include<iostream>
using namespace std;

//here we have to find total trailing zeroes of given input factorial contains.


int fact(int input){
int count = 0;

while(input >= 5){
    count += input/5;
    input /= 5;
}

return count;
}

int main(){

    int input;
    cout<<"enter input: ";
    cin>>input;

    cout<<"total tailing zeroes are: "<<fact(input)<<endl;





    return 0;
}
