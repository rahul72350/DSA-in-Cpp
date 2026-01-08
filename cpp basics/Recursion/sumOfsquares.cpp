#include<iostream>
using namespace std;


int sumOfsq(int n){
    if(n== 1){
        return 1;
    }

    return n*n + sumOfsq(n-1);
}



int main(){


    int n;
    cout<<"enter value of n: ";
    cin>>n;

    cout<<sumOfsq(n);



    return 0;
}