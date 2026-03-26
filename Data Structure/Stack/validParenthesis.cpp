#include<iostream>
#include<stack>
#include<vector>
using namespace std;


int main(){

    string str ="((())())";
    stack<char>s;

    for(int i = 0; i < str.size(); i++){
       if(s.empty()){
        s.push(str[i]);
       }

       else if(str[i] == ')' && s.top() == '('){
        s.pop();
       }
       else if(str[i] == ']' && s.top() == '['){
        s.pop();
       }
       else if(str[i] == '}' && s.top() == '{'){
        s.pop();
       }
       else{
        s.push(str[i]);
       }
    }

    cout<<boolalpha<<s.empty();
   





    return 0;
}