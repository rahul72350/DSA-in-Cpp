#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};



void display(Node* temp){
    if(temp == NULL){
        return ;
    }

    cout<<temp->data<<endl;
    display(temp->next);
}




int main(){

    
    vector<int>arr = {1,2,3,4,5};

    Node* head = NULL;
    Node* temp = NULL;

    for(int i = 0; i < arr.size(); i++){
        if(head == NULL){
            head = new Node(arr[i]);
            temp = head;
        }
        else{
        Node* newNode = new Node(arr[i]);
        temp->next = newNode;
        temp = newNode;
        }
        
    } 
    //delete first node
    // if(head != NULL)
    // {
    //     temp = head;
    //     head = head->next;
    //     delete temp;
    // }


    //delete last node
    // Node *curr = head;
    // Node* prev = NULL;

    // if(head != NULL){

    //     if(head->next == NULL){
    //         head = NULL;
    //         delete curr;
    //     }
    //     else{
    //     while(curr->next != NULL){
    //     prev = curr;
    //     curr = curr->next;
    //     }

    //     delete curr;
    //     prev->next = NULL;
    //     }
    // }


    //delete a particular node
    int x = 3;
    Node* curr = head;
    Node* prev = NULL;

    if(x == 1){
        head = head->next;
        delete curr;
    }
    else{
        while(--x){
        prev = curr;
        curr = curr->next;  
    }

    prev->next = curr->next;
    delete curr;
    }
    
    display(head);
    return 0;
}