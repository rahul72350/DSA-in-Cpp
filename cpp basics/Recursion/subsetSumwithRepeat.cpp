#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


//this will not work for non negative numbers

int subsum(vector<int>arr,int index,int size,int sum){

    if(sum == 0){
        return 1;
    }

    if(index == size || sum < 0){
        return 0;
    }


    subsum(arr,index+1,size,sum) + subsum(arr,index,size,sum-arr[index]);
}



int main(){

    vector<int>arr ={1,3,5,6};

    return 0;
}