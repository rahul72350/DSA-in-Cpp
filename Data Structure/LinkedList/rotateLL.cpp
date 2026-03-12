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
    vector<int>arr = {1,2,3,4};
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

   if(head == NULL){
    cout<<"empty list"<<endl;
    return 1;
    }
    if(head->next == NULL){
        display(head);
       return 1;
    }
    
        //count the total node
    int totalnode = 0;
    temp = head;

    while(temp){
        temp = temp->next;
        totalnode++;
    }
    temp = head;
    int k;
    cout<<endl<<"enter value of k: "<<endl;
    cin>>k;
    if(k == 0){
        display(head);
        return 1;
    }
    k = k % totalnode;

    if(k == 0){
        display(head);
        return 1;
    }
    k = totalnode - (k);
    while(--k){
        temp = temp->next;
    }

    Node* cutted = temp->next;
    temp->next = NULL;

    Node* newPointer = cutted;
    while(newPointer->next != NULL){
        newPointer = newPointer->next;
    }

    newPointer->next = head;
    head = cutted;

    display(head);

    return 0;
}