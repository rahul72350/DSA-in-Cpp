#include<iostream>
using namespace std;


int main(){

    int arr[] = {3,4,5,6,1,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0, end = size - 1, mid,ans;
    int target;
    cout<<"enter target: ";
    cin>>target;

    while(start <= end){
        mid = start + (end - start) / 2;

        if(arr[mid] == target){
            cout<<"element found at: "<<mid<<endl;
            return 1;
        }
        
        else if(arr[0] <= arr[mid]){
            if(arr[start] <= target && arr[mid] > target){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        else{
            if(arr[end] >= target && arr[mid] < target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        
    }


    cout<<"element not found in an array"<<endl;

    return 0;
}