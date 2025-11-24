#include<iostream>
using namespace std;


int main(){
                                         
    int arr[] = {2,3,4,7,11,12};
    int size = sizeof(arr)/sizeof(arr[0]);

    int target;
    cout<<"enter target: ";
    cin>>target;


    int start = 0, end = size - 1,ans,mid;

    while(start <= end){
        mid = start + (end - start) / 2;

        if(arr[mid] - (mid + 1) >= target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }

    cout<<start+target;

    return 0;
}