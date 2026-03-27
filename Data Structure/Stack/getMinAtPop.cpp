#include<iostream>
#include<vector>
#include<stack>
using namespace std;


int main(){

    vector<int>arr = {1, 6, 43, 1, 2, 0, 5};
    stack<int>s;

    for(int i = 0; i < arr.size(); i++){
        if(s.empty()){
            s.push(arr[i]);
        }
        else{
            if(s.top() < arr[i]){
                s.push(s.top());
            }
            else{
                s.push(arr[i]);
            }
        }
    }


    for(int i = 0; i < arr.size(); i++){
        cout<<s.top();
        s.pop();
    }


    return 0;
}