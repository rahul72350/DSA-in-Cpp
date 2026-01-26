#include<iostream>
#include<vector>
using namespace std;


void permute(int arr[],vector<bool>&visited,vector<int>&temp,vector<vector<int>>&ans){

    if(visited.size()==temp.size()){
        ans.push_back(temp);
        return;
    }


    for(int i = 0; i < visited.size(); i++){
        if(visited[i] == 0){
            visited[i] = 1;
            temp.push_back(arr[i]);
            permute(arr,visited,temp,ans);
            visited[i] = 0;
            temp.pop_back();
        }
    }


}


int main(){


    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    vector<vector<int>>ans;
    vector<bool>visited(size,0);
    vector<int>temp;

    permute(arr,visited,temp,ans);

    for(auto i: ans){
        for(auto j: i){
            cout<<j<<" ";
        }
        cout<<endl;
    }



    return 0;
}