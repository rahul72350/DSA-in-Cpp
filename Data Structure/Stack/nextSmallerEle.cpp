#include<iostream>
#include<stack>
#include<vector>
using namespace std;


int main(){

    vector<int>arr = {7,9,12,10,14,8,3,6,9};
    stack<int>s;
    vector<int>ans(arr.size(), -1);


    for(int i = arr.size() - 1; i >= 0; i--){
       
        while(!s.empty() && arr[i] < s.top()){
           s.pop();
        }

        if(!s.empty()){
                ans[i] = s.top();
        }

        s.push(arr[i]);
        
    }

    for(auto i: ans){
        cout<<i<<" ";
    }




    return 0;
}