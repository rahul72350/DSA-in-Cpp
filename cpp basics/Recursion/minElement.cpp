#include<iostream>
using namespace std;

int minimum(int arr[], int size){

    if(size == 0){
        return arr[size];
    }

    return min(arr[size],minimum(arr,size-1));

}

int maximum(int arr[], int size){
    if(size == 0){
        return arr[size];
    }

    return max(arr[size],maximum(arr,size - 1));
}

int main(){

    int arr[] = {4,2,5,1,-1,3,5,3,2,4,5,-3};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<<"minimum element in an array: "<<minimum(arr,size-1)<<endl;
    cout<<"maximum element in an array: "<<maximum(arr,size-1);



    return 0;
}