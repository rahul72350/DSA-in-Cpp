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

   
    //this line convert you Linked List into circular linked list
    temp->next = head;

    if(head == NULL) return 0;

        Node* slow = head;
        Node* fast = head;

        // Step 1: Detect loop
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                break;
            }
        }

        // No loop
        if(fast == NULL || fast->next == NULL){
            return 0;
        }

        // Step 2: Find start of loop
        slow = head;
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }

        // Step 3: Find last node of loop
        temp = fast;
        while(temp->next != slow){
            temp = temp->next;
        }

        // Step 4: Break loop
        temp->next = NULL;

    display(head);

    


    return 0;
}