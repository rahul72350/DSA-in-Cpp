#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void permute(vector<int>&arr,vector<vector<int>>&ans, int index){
 
    if(index == arr.size()){
        ans.push_back(arr);
        return;
    }

    vector<bool>use(21,0);

    for(int i = index; i < arr.size(); i++){

        if(use[arr[i]+10] == 0){
            swap(arr[index],arr[i]);
            permute(arr,ans,index+1);
            swap(arr[index],arr[i]);
            use[arr[i]+10] = 1;
        }
         
    }
}



int main(){

    vector<int>arr = {1,2,2};
    vector<vector<int>>ans;
    vector<bool>visited(21,0);

    permute(arr,ans,0);

    for(auto i: ans){
        for(auto j: i){
            cout<<j<<" ";
        }
        cout<<endl;
    }


    return 0;
}