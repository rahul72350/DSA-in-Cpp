#include<iostream>
#include<conio.h>
#include<vector>
#include<stack>
#include<queue>

using namespace std;



int main(){

    vector<int>arr = {12, -1, -7, 8, -15, 30, 16, 28};
    vector<int>ans;
    queue<int>q;
    int k = 3;

    for(int i = 0; i < k-1 ; i++){
        if(arr[i] < 0){
            q.push(i);
        }
        
    }


    for(int i = k-1; i < arr.size(); i++){
        if(arr[i] < 0){
            q.push(i);
        }

        if(q.empty()){
        ans.push_back(0);
        }
        else{
            if(q.front() <= i-k){
                q.pop();
            }

            if(q.empty()){
                ans.push_back(0);
            }
            else{
                ans.push_back(arr[q.front()]);
            }
        }
        
        
        
    }

    for(auto i: ans){
        cout<<i<<" ";
    }

    return 0;
}