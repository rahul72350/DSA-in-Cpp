#include<iostream>
using namespace std;


int rotateByOne(int arr[], int size){
    
    int hold = arr[size-1];

    for(int i = size - 1; i >= 0; i--){
        arr[i] = arr[i-1];
    }

    arr[0] = hold;


}


int main(){

    int arr[] = {2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    rotateByOne(arr,size);

    //after rotating array by 1

    for(int i = 0; i < size; i++)
    cout<<arr[i]<<" ";




    return 0;
}