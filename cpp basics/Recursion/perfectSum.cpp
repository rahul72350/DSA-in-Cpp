#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int perfectSum(vector<int>arr, int index, int size,int sum){

    if(sum == 0){
        return 1;
    }
    if(sum < 0 || index == size){
        return 0;
    }


    return perfectSum(arr,index+1,size,sum) + perfectSum(arr,index+1,size,sum-arr[index]);
}

int main(){

    vector<int>arr = {2,5,6,1};
    cout<<"total sum is: "<<perfectSum(arr,0,4,8);



    return 0;
}