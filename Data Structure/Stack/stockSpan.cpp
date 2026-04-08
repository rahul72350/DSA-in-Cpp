#include<iostream>
#include<vector>
#include<stack>
using namespace std;


int main(){

    vector<int>stockPrice = {7 ,10, 4, 8, 7, 2};
    stack<int>s; 
    vector<int>ans(stockPrice.size() , 1);


    for(int i = stockPrice.size() - 1; i >= 0; i--){
       
        while(!s.empty() && stockPrice[i] >= stockPrice[s.top()]){
            ans[s.top()] = s.top() - i;
            s.pop();
        }
        
        s.push(i);
    }

    while(!s.empty()){
        ans[s.top()] = s.top()+1;
        s.pop();
    }

    for(auto i: ans){
        cout<<i<<" ";
    }







    return 0;
}