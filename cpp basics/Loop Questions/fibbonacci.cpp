#include<iostream>
using namespace std;


int main(){

    int input;
    cout<<"enter input: ";
    cin>>input;

    int first = 0;  //this is already defined
    int second = 1; //this is already defined
    int fibbo = 0;  //fibbo = first + second; and then first will become second and second will become fibbo and so on.

    if(input == 1){
        cout<<first<<endl;
        return 0;
    }
    if(input == 2){
        cout<<second<<endl;
        return 0;
    }

    //0 1 1 2 3 5 8 13 21
    for(int i = 2; i < input; i++){
    fibbo = first + second;
    first = second;
    second = fibbo;
    }
   
    cout<<fibbo<<endl;



    return 0;
}