#include<iostream>
using namespace std;


int sum(int N){
    if(N == 1){
        return 1;
    }

    return N + sum(N-1);
}


int main(){

    int N;
    cout<<"enter value of N: "<<endl;
    cin>>N;

    cout<<"sum of N natural number is: "<<sum(N);


    return 0;
}
