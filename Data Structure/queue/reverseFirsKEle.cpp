#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main(){

    int k = 3;

    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    stack<int>st;

    while(k--){
        st.push(q.front());
        q.pop();
    }

    int n = q.size();

    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }

    while(n--){
        q.push(q.front());
        q.pop();
    }

    int size = q.size();

    while(size){
        cout<<q.front();
        q.push(q.front());
        q.pop();
        size--;
    }

    return 0;
}