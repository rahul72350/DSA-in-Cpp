#include<iostream>
#include<vector>
using namespace std;

//normal queue using array
class Queue{
    int* arr;
    int rear;
    int front;
    int size;

    public:
    Queue(int s){
        arr = new int[s];
        front = -1;
        rear = -1;
        size = s;
    }

    //is empty function
    bool isempty(){
        return front == -1;
    }

    //is full function
    bool isfull(){
        return rear == size-1;
    }

    //push function
    void push(int val){
        if(isempty()){
            front++;
            rear++;
            arr[rear] = val;
            cout<<val<<" pushed sucessfully"<<endl;
            return;
        }
        else if(isfull()){
            cout<<"queue is full"<<endl;
            return;
        }
        else{
        rear++;
        arr[rear] = val;
        cout<<val<<" pushed sucesfully"<<endl;
        }    
    }

    //pop function
    void pop(){
       if(isempty()){
        cout<<"queue is empty"<<endl;
        return;
       }
       else{
        if(front == rear){
            cout<<arr[front]<<" popped sucesfully"<<endl;
            front = -1;
            rear = -1;
        }
        else{
            cout<<arr[front]<<"popped from queue"<<endl;
            front++;
        }
       }
    }

    //return first value in queue
    int start(){
        if(isempty()){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }
};

//circular queue using array
class CircularQueue{
    int* arr;
    int rear;
    int front;
    int size;

    public:
    CircularQueue(int s){
        arr = new int[s];
        front = -1;
        rear = -1;
        size = s;
    }

    //is empty function
    bool isempty(){
        return front == -1;
    }

    //is full function
    bool isfull(){
        return (rear+1)%size == front;
    }

    //push function
    void push(int val){
        if(isempty()){
            front++;
            rear++;
            arr[rear] = val;
            cout<<val<<" pushed sucessfully"<<endl;
            return;
        }
        else if(isfull()){
            cout<<"queue is full"<<endl;
            return;
        }
        else{
        rear = (rear+1)%size;
        arr[rear] = val;
        cout<<val<<" pushed sucesfully"<<endl;
        }    
    }

    //pop function
    void pop(){
       if(isempty()){
        cout<<"queue is empty"<<endl;
        return;
       }
       else{
        if(front == rear){
            cout<<arr[front]<<" popped sucesfully"<<endl;
            front = -1;
            rear = -1;
        }
        else{
            cout<<arr[front]<<"popped from queue"<<endl;
            front = (front + 1)%size;
           
        }
       }
    }

    //return first value in queue
    int start(){
        if(isempty()){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }
};


//queue using linked list

class Node{  
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        next = NULL;
    }

};

class LLQueue{
    Node* front;
    Node* rear;
    public:

    LLQueue(){
        front = NULL;
        rear = NULL;
    }

    //is empty function
    bool isempty(){
        return front == NULL;
    }

    void push(int val){
        if(isempty()){
            front = new Node(val);
            rear = front;
            cout<<rear->data<<" pushed into queue"<<endl;
            return;
        }
        else {
            rear->next = new Node(val);
            rear = rear->next;
            cout<<rear->data<<" pushed into queue"<<endl;
        }
    }

    void pop(){
        if(isempty()){
            cout<<"queue underflow"<<endl;
            return;
        }

        Node* temp = front;
        front = front->next;
        cout<<temp->data<<" popped sucesfully"<<endl;
        delete temp;

        
    }

    int start(){
        if(isempty()){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        else{
            return front->data;
        }
    }

};

int main(){

    // Queue q(5);
    // q.push(5);
    // q.push(1);
    // q.push(3);
    // q.push(4);
    // q.push(1);
    // q.push(3);
    // q.push(4);
    // q.pop();
    // q.pop();
    // cout<<q.start();

    // CircularQueue q2(5);
    // q2.push(1);
    // q2.push(2);
    // q2.push(3);
    // q2.push(4);
    // q2.push(5);

    // q2.pop();
    // q2.pop();
    // q2.pop();

    // q2.push(30);

    //LL queue
    LLQueue q3;
    q3.push(1);
    q3.push(2);
    q3.push(3);
    q3.push(4);
    q3.push(5);
    q3.push(6);
    q3.pop();
    q3.pop();
    q3.pop();




    return 0;
}