#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};


//stack class
class Stack{
    Node* top;
    int size;
    public:

    Stack(){
        top = NULL;
        size = 0;
    }

    //push
    void push(int val){
        Node* temp = new Node(val);
        if(temp == NULL){
            cout<<"stack overflow"<<endl;
            return;
        }
        
        temp->next = top;
        top = temp; 
        size++; 
        cout<<"pushed "<<val<<" into the stack"<<endl;
    }

    //pop
    void pop(){
        if(top == NULL){
            cout<<"stack underflow occurs"<<endl;
            return;
        }

        Node* temp = top;
        cout<<"popped "<<top->data<<" from the stack"<<endl;
        top = top->next;
        delete temp;
        size--;
    }

    //peek
    int peek(){
        if(top == NULL){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return top->data;
    }
    //issize
    int issize(){
        return size;
    }
    //isempty
    bool isempty(){
        return top == NULL;
    }

};

int main(){


    Stack s;
    s.push(6);
    s.push(16);
    s.push(62);
    s.push(86);
    s.pop();

    cout<<s.issize()<<endl;


    return 0;
}