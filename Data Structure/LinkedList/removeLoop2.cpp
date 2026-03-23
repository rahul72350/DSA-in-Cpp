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

    Node* fast = head;
    Node* slow = head;
    int count = 0;

    while(fast && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            break;
        }
    }


    if(fast == NULL || fast->next == NULL){
        cout<<"loop doesn't existed!"<<endl;
        return 0;
    }


    count++;
    slow = fast->next;
        while(slow!= fast){
            count++;
            slow = slow->next;
        }
        
        slow = head;
        fast = head;
        while(count--){
           
            fast = fast->next;
        }

        while(slow != fast){
            
            slow = slow->next;
            fast = fast->next;
        };

        while(slow->next != fast){
            slow = slow->next;
        }

        slow->next = NULL;

        display(head);



    return 0;
}