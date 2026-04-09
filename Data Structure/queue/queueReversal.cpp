#include<iostream>
#include<stack>
#include<queue>
#include<vector>
using namespace std;


int main(){

    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    stack<int>st;

    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }

    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }

    int size = q.size();

    while(size){
        cout<<q.front()<<"  ";
        q.push(q.front());
        q.pop();
        size--;
    }







    return 0;
}