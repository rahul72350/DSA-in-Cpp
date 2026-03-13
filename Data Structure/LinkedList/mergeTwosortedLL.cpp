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

    vector<int>arr = {5 ,10, 15, 40};
    Node* head1 = NULL;
 
    //insertion at last using loop
    Node* temp = head1;
    for(int i = 0; i < arr.size(); i++){
        if(head1 == NULL){
            head1 = new Node(arr[i]);
            temp = head1;
        }
        else{
            Node* newNode = new Node(arr[i]);
            temp->next = newNode;
            temp = temp->next;
        }
    }

    display(head1);
    cout<<endl;

    vector<int>arr2 = {2 ,3 ,20};
    Node* head2 = NULL;
 
    //insertion at last using loop
    temp = head2;
    for(int i = 0; i < arr2.size(); i++){
        if(head2 == NULL){
            head2 = new Node(arr2[i]);
            temp = head2;
        }
        else{
            Node* newNode = new Node(arr2[i]);
            temp->next = newNode;
            temp = temp->next;
        }
    }

    display(head2);
    cout<<endl;

    //merge two sorted array

   
    Node* head = NULL;
    Node* temp2;
    while(head1 && head2){
        
        if(head == NULL){
            if(head1->data > head2->data){
                head = head2;
                head2 = head2->next;
                temp2 = head;
            }
            else{
                head =  head1;
                head1 = head1->next;
                temp2 = head;
            }
        }

        else if(head1->data > head2->data){
            temp2->next = head2;
            temp2 = temp2->next;
            head2 = head2->next;
        }
        else{
            temp2->next = head1;
            temp2 = temp2->next;
            head1 = head1->next;
        }
    }

    Node* notNull;
    if(head1 == NULL){
        notNull = head2;
    }
    else{
        notNull = head1;
    }

    while(notNull){
        temp2->next = notNull;
        temp2 = temp2->next;
        notNull = notNull->next;
    }

    display(head);


    return 0;
}