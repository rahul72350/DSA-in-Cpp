#include<iostream>
#include<climits>
using namespace std;


int main(){


    int arr[] = {3,4,5,6,6,3,3};
    int size = sizeof(arr)/sizeof(arr[0]);

    int min = INT_MAX;

    for(int i = 0; i < size; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }

    cout<<"minimum element is: "<<min;




    return 0;
}