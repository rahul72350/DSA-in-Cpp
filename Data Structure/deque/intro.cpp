#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int val){
        data = val;
        prev = NULL;
        next = NULL;
    }
};

class DequeLL{
    Node* front;
    Node* rear;
    public:

    DequeLL(){
        front = NULL;
        rear = NULL;
    }

    void push_front(int data){
        if(front == NULL){
            front = rear = new Node(data);
            return;
        }

        Node* temp = new Node(data);
        temp->next = front;
        front->prev = temp;
        front = temp;
    }

    void push_back(int data){
        if(front == NULL){
            rear = front = new Node(data);
            return;
        }

        Node* temp = new Node(data);
        rear->next = temp;
        temp->prev = rear;
        rear = temp;
    }

    void pop_front(){
        if(front == NULL){
            cout<<"empty deque"<<endl;
            return;
        }
        if(front == rear){
            Node* temp = front;
            front=rear = NULL;
            delete temp;
            return;
        }
        
        Node* temp = front;
        front = front->next;
        front->prev = NULL;
        delete temp;
    }

    void pop_back(){
        if(front == NULL){
            cout<<"deque is empty"<<endl;
            return;
        }

        if(front == rear){
            Node* temp = rear;
            rear = front = NULL;
            delete temp;
            return;
        }

        Node* temp = rear;
        rear = rear->prev;
        rear->next = NULL;
        delete temp;
    }

    int start(){
        if(front == NULL){
            return -1;
        }

        else{
            return front->data;
        }
    }

    int end(){
        if(front == NULL){
            return -1;
        }
        else{
            return rear->data;
        }
    }
   
};

class DequeArr{
    int front, rear, size;
    int *arr;

    public:
    DequeArr(int size){
        arr = new int[size];
        this->size = size;
        front = rear = -1;
    }

    bool isEmpty(){
        return front == -1;
    }

    bool isFull(){
        return (rear + 1 % size) == front;
    }

    void push_front(int data){
        if(isEmpty()){
            front = rear = 0;
            arr[0] = data;
            return;
        }

        if(isFull()){
            cout<<"Deque is full"<<endl;
            return;
        }

        front = (front - 1 + size) % size;
        arr[front] = data;
        return;
    }

    void push_back(int data){
        if(isEmpty()){
            front = rear = 0;
            arr[0] = data;
            return;
        }
        if(isFull()){
            cout<<"deque is full"<<endl;
            return;
        }

        rear = (rear+1) % size;
        arr[rear] = data;

    }

    void pop_front(){
        if(isEmpty()){
            cout<<"deque is empty"<<endl;
            return;
        }
        if(front == rear){
            front = rear = -1;
            return;
        }

        front = (front+1)%size;
    }

    void pop_back(){
        if(isEmpty()){
            cout<<"deque is empty"<<endl;
            return;
        }

        if(front == rear){
            front = rear = -1;
            return;
        }

        rear = (rear - 1 + size) % size;
    }

    int start (){
        if(isEmpty()){
            cout<<"deque is empty"<<endl;
            return;
        }

        return arr[front];
    }

    int end(){
        if(isEmpty()){
            cout<<"deque is empty"<<endl;
            return;
        }

        return arr[rear];
    }
};




int main(){

    DequeLL dq;
    dq.push_back(4);
    dq.pop_back();
    dq.push_front(5);
   




    return 0;
}