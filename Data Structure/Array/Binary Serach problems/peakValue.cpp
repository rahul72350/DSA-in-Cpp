#include<iostream>
using namespace std;


int main(){


    int arr[] = {1,2,3,4,6,3,2,1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int start = 0, end = size - 1, mid;

    while(start <= end){

       mid = end - (end - start) / 2;

       if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]){
        cout<<"peak value is: "<<arr[mid];
        return 0;
       }
       else if(arr[mid] > arr[mid + 1]){
        end = mid - 1;
       }
       else{
        start = mid + 1;
       }
    }



    return 0;
}