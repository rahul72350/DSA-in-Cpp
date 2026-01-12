#include<iostream>
using namespace std;


void print(int arr[],int i){
    if(i == 0){
        cout<<arr[i]<<" ";
        return;
    }

    print(arr,i-1);             //for reverse printing just change the order of last two lines
    cout<<arr[i]<<" ";
}


int main(){


    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    print(arr,size-1);



    return 0;
}