#include<iostream>
#include<vector>
using namespace std;


//node blueprint
class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};


//display function
void display(Node* temp){
    if(temp == NULL){
        return ;
    }

    cout<<temp->data<<" ";
    display(temp->next);
}


int main(){

    vector<int>arr = {1,2,3,4,5,6,7,8,9};
    Node* head = NULL;
 
    //insertion at last using loop
    Node* temp = head;
    for(int i = 0; i < arr.size(); i++){
        if(head == NULL){
            head = new Node(arr[i]);
            temp = head;
        }
        else{
            Node* newNode = new Node(arr[i]);
            temp->next = newNode;
            temp = temp->next;
        }
    }

    //print linked list elements
    display(head);
    cout<<endl;
    

    //given k
    int k = 4;
    //essential pointers

    Node* first; 
    Node* second;
    Node* prev;
    Node* curr;
    Node* front;

    
    //static pointer
    first = new Node(0);
    first->next = head;
    head = first;

    while(first->next){
    int x = k;
    second = first->next;
    prev = first;
    curr = first->next;
    

    while(x-- && curr){
        front = curr->next;
        curr->next = prev;
        prev = curr;
        curr = front;
    }

    first->next = prev;
    second->next = curr;
    first = second;
    }
    first = head;
    head = head->next;
    delete first;


    display(head);

    return 0;

}