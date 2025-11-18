#include<iostream>
using namespace std;



int main(){

    int arr[100];
    arr[0] = 0;
    arr[1] = 1;

    int input;
    cout<<"enter input: ";
    cin>>input;

    for(int i = 2; i < input; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }

    cout<<arr[input-1];



    return 0;
}