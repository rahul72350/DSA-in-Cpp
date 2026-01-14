#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size,int target){
    if(size == -1){
        return false;
    }
    if(arr[size] == target){
        return true;
    }

    return linearSearch(arr,size-1,target);
}



int main(){

    int arr[] = {1,2,5,4,7,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<<boolalpha<<"element is present: "<<linearSearch(arr,size-1,7);




    return 0;
}