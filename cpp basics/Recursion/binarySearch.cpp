#include<iostream>
using namespace std;

//non decreasing
int binarySearch(int arr[],int start,int end,int target){
    if(start > end){
        return -1;
    }

    int mid = start + (end-start) / 2;

    if(arr[mid] == target){
        return mid;
    }
    else if(arr[mid]<target){
      return binarySearch(arr,mid+1,end,target);
    }
    else{
       return binarySearch(arr,start,mid-1,target);
    }
}

//non increasing

int binarySearchNonincreasing(int arr[],int start,int end,int target){
    if(start > end){
        return -1;
    }

    int mid = start + (end-start) / 2;

    if(arr[mid] == target){
        return mid;
    }
    else if(arr[mid] < target){
      return binarySearchNonincreasing(arr,start,mid-1,target);
    }
    else{
       return binarySearchNonincreasing(arr,mid+1,end,target);
    }
}


int main(){

    int arr[] = {6,5,4,3,2,1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<<"answer is: "<<binarySearchNonincreasing(arr,0,size-1,5);




    return 0;
}