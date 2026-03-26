#include<iostream>
#include<stack>
using namespace std;



int main(){


    string str = "()))((";
    stack<char>s;

    for(int i = 0; i < str.size(); i++){
        if(s.empty()){
            s.push(str[i]);
        }

        else if(str[i] == ')'){
            if(s.top() == '('){
                s.pop();
            }
            else{
                s.push(str[i]);
            }
        }
        else{
            s.push(str[i]);
        }
    }

    cout<<s.size();


    return 0;
}