#include<iostream>
using namespace std;


//time complexity O(n^2)

//sorting in increasing order

void insertion_sort_inc(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Shift elements
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}


//sorting in decreasing order

void insertion_sort_dec(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Shift elements
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j--;
           
        }

        arr[j + 1] = key;
    }
}




int main(){

    int arr[] = {4,1,2,3,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    insertion_sort_inc(arr,size);
   

    //printing sorted array
    
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }


    




    return 0;
}