#include<iostream>
#include<vector>
#include<stack>
using namespace std;


int main(){

    vector<int>arr = {0, 2, 3, 1, 1};
    stack<int>s;
    vector<int>ans(arr.size(),-1);
    int n = arr.size();

    for(int i = 0; i < arr.size() * 2; i++){
       
            while(!s.empty() && arr[i%n] > arr[s.top()]){
            ans[s.top()] = arr[i%n];
            s.pop();
            }
            s.push(i%n);
            
    }

    for(auto i: ans){
        cout<<i<<" ";
    }


    return 0;
}