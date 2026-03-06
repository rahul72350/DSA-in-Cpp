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

     vector<int>arr = {1,2,3,4,5,6,7,8,9,10};
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

    //remove every kth Node

    int k = 10;
    int count = 1;

    if(k == 1){
        head = NULL;
    }

    else{
    Node* curr = head;
    Node* prev = NULL;

    while(curr){

        if(count == k){
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
            count = 1;
        }
        else{
        prev = curr;
        curr = curr->next; 
        count++;
        }
    }
    }


    display(head);


    return 0;
}
