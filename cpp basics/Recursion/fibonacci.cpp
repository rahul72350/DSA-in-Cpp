#include<iostream>
using namespace std;

int fibbo(int N){

    if(N <= 1){
        return N;
    }

    return fibbo(N-1) + fibbo(N-2);

}


int main(){

    cout<<"fibbonacci is: "<<fibbo(5);


    return 0;
}