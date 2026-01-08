#include<iostream>
using namespace std;


int fact(int N){

    if(N == 0){
        return 1;
    }

    return N * fact(N-1);

}



int main(){

    //n must be greater than 0

    cout<<"factorial is: "<<fact(4);

    return 0;
}