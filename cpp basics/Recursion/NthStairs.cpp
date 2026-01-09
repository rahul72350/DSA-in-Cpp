#include<iostream>
using namespace std;

int stairs(int n){

    if(n <= 1){
        return 1;
    }

    return stairs(n-1) + stairs(n-2);
}


int main(){

    int n;
    cout<<"enter value of n: ";
    cin>>n;

    cout<<"answer is: "<<stairs(n)<<endl;



    



    return 0;
}