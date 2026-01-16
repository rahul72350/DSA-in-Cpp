#include<iostream>
using namespace std;


int partition(int arr[],int start,int end){

    int pos = start;
    
    for(int i = start; i <= end; i++){
        if(arr[i] <= arr[end]){
            swap(arr[i],arr[pos]);
            pos++;
        }
    }

    return pos-1;
}

void quickSort(int arr[],int start,int end){

    if(start >= end){
        return;
    }

    int pivot = partition(arr,start,end);
    //left part
    quickSort(arr,start,pivot- 1);
    //right part
    quickSort(arr,pivot,end);
}



int main(){

    int arr[] = {5,3,2,6,0,9,2,2,6,4,5,1,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,size-1);


    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }




    return 0;
}