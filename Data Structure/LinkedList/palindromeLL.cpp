#include<iostream>
#include<vector>
#include<math.h>
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

    vector<int>arr = {1,2,3,2,1};
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

    //count the total node
    int totalnode = 0;
    temp = head;

    while(temp){
        temp = temp->next;
        totalnode++;
    }
    

   totalnode /= 2;

   Node* curr = head;
   Node* prev = NULL;

   while(totalnode--){
    prev = curr;
    curr = curr->next;
   }

   prev->next = NULL;
   prev = NULL;
   Node* front = NULL;

   while(curr){
    front = curr->next;
    curr->next = prev;
    prev = curr;
    curr = front;
   }

   //start comparison
   Node* firstPart = head;
   Node* secondPart = prev;

   while(firstPart){
    if(firstPart->data != secondPart->data){
        cout<<"this is not a palindrome"<<endl;
        return 1;
    }
    firstPart = firstPart->next;
    secondPart = secondPart->next;
   }

   cout<<"given list is palindrome"<<endl;

    return 0;
}