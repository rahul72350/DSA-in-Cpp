#include<iostream>
#include<stack>
#include<queue>
using namespace std;

class queue{
    stack<int>st1;
    stack<int>st2;

    public:
    bool empty(){
        return st1.empty() && st2.empty();  
    }

    void push(int val){
        st1.push(val);
    }

    void pop(){
        if(empty()){
            return;
        }

        if(!st2.empty()){
            cout<<"popped: "<<st2.top()<<endl;
            st2.pop();
            return;
        }

        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }

        cout<<"popped: "<<st2.top()<<endl;
        st2.pop();
    }

    int peek(){

       if (empty()) {
        cout << "queue is empty" << endl;
        return -1;
    }

    
    if (st2.empty()) {
        while (!st1.empty()) {
            st2.push(st1.top());
            st1.pop();
        }
    }

    return st2.top();   
    }

};

int main(){


  



    return 0;
}