#include<iostream>
using namespace std;




int main(){

    int arr[] = {2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < size/2; i++){
        swap(arr[i],arr[size-1-i]);
    }

    //printing reversed array

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}