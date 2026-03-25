#include<iostream>
using namespace std;

//first in first out
//first in last out
//last in last out
//last in first out (stack follows LIFO principle)



//stack class blue print
class Stack{
    int *stack;
    int size;
    int top;

    public: 
    int flag = 0;
    Stack(int s){
        size = s;
        top = -1;
        stack = new int[s];
    }

    //push method
    void push(int val){
    if(top == size-1){
        cout<<"stack overflow"<<endl;
        return;
    }
    top++;
    stack[top] = val; 
    cout<<"pushed "<<val<<" into the stack"<<endl;
    flag = 1; 
    }


    //pop method
    void pop(){
    if(top == -1){
        cout<<"stack underflow"<<endl;
        return;
    }
    
    cout<<"Popped "<<stack[top]<<" from the stack"<<endl;
    top--;
    if(top == -1){
        flag = 0;
    }
   
    }

    //peak method
    int peek(){
        if(top == -1){
            cout<<"stack is empty"<<endl;
            return -1;
        }

        return stack[top];
    }

    //issize method
    int issize(){
    return top+1;
    }

    //isempty method
    bool isEmpty(){
    return top == -1;
    }
};


int main(){

    
    //it is a linear data structure, in which insertion and deletion only allowed at the end, which is called the top of stack.
    //when we define a stack as an abstract data type, then we are only interested in know the stack operation from user pov.
    //it simply mean, we are not interested in knowing the details, we only interested in what type of o/p we can perform.
    //some operations are: push(insertion), pop(deletion), top(element at top), size, empty(isempty).

    Stack s(5);
   
    
    int value = s.peek();
    if(s.flag == 1){
        cout<<value<<endl;
    }







    return 0;
}