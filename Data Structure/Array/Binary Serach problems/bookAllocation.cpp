#include<iostream>
#include<climits>
using namespace std;

//return sum of all array element
int sumOfArray(int arr[], int size){
    int sum = 0;

    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

//return maximum value of array
int maxOfArray(int arr[],int size){
    int max = INT_MIN;
    for(int i = 0; i < size; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int main(){

    int arr[] = {12,34,67,90};
    int size = sizeof(arr) / sizeof(arr[0]);

    int start = maxOfArray(arr,size), end = sumOfArray(arr,size), mid, ans;
    int count, pages, student = 2;


    while(start <= end){
        
        mid = start + (end- start) / 2;
        pages = arr[0];
        count = 1;
        for(int i = 1; i < size; i++){
            pages += arr[i];

            if(mid < pages){
                count++;
                pages = arr[i];
            }
        }
        if(count <= student){
            ans = mid;
            end = mid - 1;   
        }
        else{
            start = mid + 1;
        }
    }

    cout<<ans<<endl;





    return 0;
}