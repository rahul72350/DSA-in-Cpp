#include<iostream>
#include<stack>
#include<vector>
using namespace std;



int main(){

    vector<string>str = {"ab","ac","da","da","ac","db","ea"};
    stack<string>s;

    for(int i = 0; i < str.size(); i++){
        if(s.empty()){
            s.push(str[i]);
        }
        else if(str[i] != s.top()){
            s.push(str[i]);
        }
        else{
            s.pop();
        }
    }

    int i = s.size() -1;

    while(!s.empty()){
        str[i] = s.top();
        s.pop();
        i--;
    }

    for(auto i: str){
        cout<<i<<" ";
    }



    return 0;
}