#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void subsequence(int v[],int index, int size, vector<int>temp, vector<vector<int>>& ans){

    if(index == size){
        ans.push_back(temp);
        return;
    }

    subsequence(v,index+1,size,temp,ans);
    temp.push_back(v[index]);
    subsequence(v,index+1,size,temp,ans);


}


int main(){


    int arr[] = {1,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);

    vector<int>temp;
    vector<vector<int>>ans;


    subsequence(arr,0,size,temp,ans);
    
    for(auto i: ans){
        for(auto j: i){
            cout<<j<<" ";
        }
        cout<<endl;
    }





    return 0;
}  