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

    vector<int>arr = {1,2,2,2,3,4};
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

    display(head);
    cout<<endl;

    //remove duplicate lists

    Node* curr = head->next;
    Node* prev = head;

    while(curr){
        if(prev->data == curr->data){
            Node *temp = curr;
            curr = curr->next;
            prev->next = curr;
            delete temp;
        }
        else{
            prev = prev->next;
            curr = curr->next;
        } 
    }

    display(head);


    return 0;
}