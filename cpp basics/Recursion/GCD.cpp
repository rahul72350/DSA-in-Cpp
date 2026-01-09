#include<iostream>
using namespace std;

int func(int a, int b){

    if(b==0){
        return a;
    }

    return func(b,a%b);

}



int main(){

   cout<<"answer is: "<< func(18,48);


    return 0;
}