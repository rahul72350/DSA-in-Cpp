#include<iostream>
using namespace std;


//here we will implement linear search

int main(){


    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    int target;
    cout<<"enter searching element: ";
    cin>>target;

    for(int i = 0; i < size; i++){
        if(target == arr[i]){
            cout<<"element found at index: "<<i<<endl;
            return 0;
        }
    }

    cout<<"element not found";


    return 0;
}