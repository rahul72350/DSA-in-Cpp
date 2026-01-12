#include<iostream>
using namespace std;

int sum(int arr[],int size){
    if(size == 0){
        return arr[size];
    }

    return arr[size] + sum(arr,size-1);
}

int main(){

    int arr[] = {3,4,2,3,4};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<<"sum of array is: "<<sum(arr,size-1);





    return 0;
}