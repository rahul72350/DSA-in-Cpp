#include<iostream>
#include<vector>
using namespace std;


class Node{
    public:
    Node* prev;
    int data;
    Node* next;

    Node(int value){
        prev = NULL;
        data = value;
        next = NULL;
    }
};


//insertion at beginning in doubly linked list

Node* insert_at_beg(Node* head,int val){
    if(head == NULL){
        head = new Node(val);
        return head;
    }
    Node* temp = new Node(val);
    temp->next = head;
    head->prev = temp;
    head = temp;
    return head;
    
}

//insertion at ending in doubly linked list

Node* insert_at_end(Node* head, int val){
    
    if(head == NULL){
        head = new Node(val);
        return head;
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    temp->next = newNode;
    newNode->prev = temp;

    return head;
}

//insertion at middle of doubly linked list
Node* insert_at_middle(int pos, int value, Node* head){

    if(pos == 0){
        cout << "Invalid position"<<endl;
        return head;
    }

    // insert at beginning
    if(pos == 1){
        Node* newNode = new Node(value);
        newNode->next = head;

        if(head != NULL){
            head->prev = newNode;
        }

        head = newNode;
        return head;
    }

    Node* curr = head;

   
    for(int i = 1; i < pos-1 && curr != NULL; i++){
        curr = curr->next;
    }

    if(curr == NULL){
        cout << "position is greater than actual LL"<<endl;
        return head;
    }

    Node* newNode = new Node(value);

    newNode->next = curr->next;
    newNode->prev = curr;

    if(curr->next != NULL){
        curr->next->prev = newNode;
    }

    curr->next = newNode;
    return head;
}

//create doubly linked list using recursion

Node* doublyLL(Node* prev, vector<int>& arr, int index){
    if(index == arr.size()){
        return NULL;
    }

    Node* newNode = new Node(arr[index]);
    newNode->prev = prev;
    newNode->next = doublyLL(newNode,arr,index+1);
    return newNode;
}


//display function
void display(Node* temp){
    if(temp == NULL){
        return ;
    }

    cout<<temp->data<<" ";
    display(temp->next);
}

int main(){

    Node* head = NULL;
    // int val;
    // for(int i = 0; i < 4; i++){
    //     head = insert_at_beg(head,i+1);
    // }
    
    // head = insert_at_end(head,40);
    // head = insert_at_end(head,320);
    // display(head);

    //create doubly linked list using vector's value

    //this is not optimized approach
    vector<int>arr = {1,2,3,4,5,6};

    // for(int i = 0; i < arr.size(); i++){
    //     head = insert_at_end(head,arr[i]);
    // }

    // display(head);

    //this is better approach
    // Node* tail = NULL;

    // for(int i = 0; i < arr.size(); i++){
    //     if(head == NULL){
    //         head = new Node(arr[i]);
    //         tail = head;
    //     }
    //     else{
    //         Node* newNode = new Node(arr[i]);
    //         tail->next = newNode;
    //         newNode->prev = tail;
    //         tail = newNode;
    //     }
    // }

    //using recursion
    head = doublyLL(NULL,arr,0);


    display(head);

    head = insert_at_middle(6,100,head);
    head = insert_at_middle(0,101,head);

    display(head);



    return 0;
}