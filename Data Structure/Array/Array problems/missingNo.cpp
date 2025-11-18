#include<iostream>
#include<climits>
using namespace std;

int sum(int arr[], int size){
    int ans = 0;

    for(int i = 0; i < size; i++){
        ans += arr[i];
    }

    return ans;
}

int max(int arr[],int size){
    int maximum = INT_MIN;
    for(int i = 0; i < size; i++){
        if(maximum < arr[i]){
            maximum = arr[i];
        }
    }
    return maximum;
}



int main(){

    int arr[]={1, 2, 3, 4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int maxi = max(arr,size);
    int total = maxi*(maxi+1)/2;         // n(n+1)/2
    int arrSum = sum(arr,size);


   
    cout<<"missing no: "<<total-arrSum<<endl;

    //Note: zero means no any number is missing








    return 0;
}