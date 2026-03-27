#include<iostream>
#include<stack>
#include<vector>
using namespace std;


int main(){

    string str = "(aa(bdc))p(de)";

    int count = 0;
    int track = 0;

    stack<char>s;
    vector<int>ans;


    for(int i = 0; i < str.size(); i++){
        //opening brackets
        if(str[i] == '('){
            count++;
            s.push(count);
            ans.push_back(count);
        }

        //closing brackets
        else if(str[i] == ')'){
            ans.push_back(s.top());
            s.pop();
        }


    }

    

    for(auto i: ans){
        cout<<i<<" ";
    }


    return 0;
}