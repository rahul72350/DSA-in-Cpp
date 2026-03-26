#include<iostream>
#include<stack>
#include<vector>
using namespace std;


int main(){

    vector<char>arr = {'h','e','l','l','o'};
    stack<char>s;

    for(int i = 0; i < arr.size(); i++){
        s.push(arr[i]);
    }

    for(int i = 0; !s.empty(); i++){
        arr[i] = s.top();
        s.pop();
    }

    for(auto i: arr){
        cout<<i<<" ";
    }
    



    return 0;
}