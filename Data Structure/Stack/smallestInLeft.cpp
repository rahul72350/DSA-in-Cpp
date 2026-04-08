#include<iostream>
#include<vector>
#include<stack>
using namespace std;


int main(){

    vector<int>arr = {4,13,11,5,9,7,8,6};
    stack<int>st;

    vector<int>ans(arr.size(), -1);

    for(int i = arr.size()-1; i >= 0; i--){
        while(!st.empty() && arr[i] > arr[st.top()]){
            ans[st.top()] = arr[i];
            st.pop();
        }

        st.push(i);
    }


    for(auto i: ans){
        cout<<i<<" ";
    }



    return 0;
}