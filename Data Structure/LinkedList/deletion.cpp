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

//delete a first node using function

void deleteFirstNode(Node* &head){
   if(head == NULL){
    cout<<"linked list is empty"<<endl;
    return;
   }
   Node* temp = head;
   head = head->next;
   delete temp;
}


//delete a last node using recursion
Node* deleteLastNode(Node* head) {

    if (head == NULL) {
        return NULL;
    }

    if (head->next == NULL) {
        delete head;
        return NULL;
    }

    head->next = deleteLastNode(head->next);
    return head;
}


//delete particular node using recursion
Node* deleteParticularNode(Node* curr,int x){
    if(x == 1){
        Node *temp = curr->next;
        delete curr;
        return temp;
    }

    curr->next = deleteParticularNode(curr->next,x-1);
    return curr;
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

    // if(x == 1){
    //     head = head->next;
    //     delete curr;
    // }
    // else{
    //     while(--x){
    //     prev = curr;
    //     curr = curr->next;  
    // }

    // prev->next = curr->next;
    // delete curr;
    // }
    
    head = deleteLastNode(head);
    display(head);
    return 0;
}