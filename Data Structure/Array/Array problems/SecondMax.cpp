#include<iostream>
#include<climits>
using namespace std;


int max(int arr[],int size){
    int maximum = INT_MIN;
    for(int i = 0; i < size; i++){
        if(maximum < arr[i]){
            maximum = arr[i];
        }
    }
    return maximum;
}


int main(){

    int arr[] = {2,3,4,5,6,1,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int maxi = max(arr,size);
    int secondMax = INT_MIN;

    for(int i = 0; i < size; i++){
        if(secondMax < arr[i] && arr[i] != maxi){
            secondMax = arr[i];
        }
    }

    cout<<"second max is: "<<secondMax;
    






    return 0;
}