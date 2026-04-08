#include<iostream>
#include<stack>
#include<vector>
using namespace std;


int main(){

    vector<int>arr = {20, 18, 8, 17, 20, 20, 7, 2, 9, 10, 2, 11, 20, 8};
    stack<int>s;
    vector<int>ans(arr.size(), -1);

    //GFG is not accepting this solution
    // for(int i = 0; i < arr.size(); i++){
       
    //         while(!s.empty() && arr[i] > arr[s.top()]){
    //         ans[s.top()] = arr[i];
    //         s.pop();
    //         }
    //         s.push(i);
            
    // }

    for(int i = arr.size() - 1; i >= 0; i--){
       
        while(!s.empty() && arr[i] >= s.top()){
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