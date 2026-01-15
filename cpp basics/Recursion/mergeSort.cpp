#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void merge(int arr[],int start, int mid, int end);

void mergesort(int arr[],int start,int end){
    int mid = start + (end-start) / 2;

    if(start == end){
        return;
    }

    //left part
    mergesort(arr,start,mid);
    //right part
    mergesort(arr,mid+1,end);
    //merge 
    merge(arr,start,mid,end);

}


void merge(int arr[],int start, int mid,int end){

    vector<int>temp(end-start+1);

    int index = 0, left = start, right = mid+1;

    while(left <= mid && right <= end){
        if(arr[left] <= arr[right]){
            temp[index] = arr[left];
            left++,index++;
        }
        else{
            temp[index] = arr[right];
            right++,index++;
        }
    }

    //if left has remaining element
    while(left <= mid){
        temp[index] = arr[left];
        left++,index++;
    }

    //if right has remaining element
    while(right <= end){
        temp[index] = arr[right];
        right++,index++;
    }

    index = 0;

    //copy sorted values in original array
    while(start <= end){
        arr[start] = temp[index];
        start++,index++;
    }

}



int main(){


    int arr[] = {6,3,1,2,8,9,10,7,3,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,size-1);

    //print sorted array

    for(int i = 0; i <= size; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}