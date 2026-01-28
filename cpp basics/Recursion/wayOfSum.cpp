#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int ways(int arr[],int size,int sum){
    if(sum == 0){
        return 1;
    }

    if(sum < 0){
        return 0;
    }

    int ans = 0;
    for(int i = 0; i < size; i++){
        ans += ways(arr,size,sum-arr[i]);
    }

    return ans;
}


int main(){


    int arr[] = {1,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"answer is: "<<ways(arr,size,7);




    return 0; 
}