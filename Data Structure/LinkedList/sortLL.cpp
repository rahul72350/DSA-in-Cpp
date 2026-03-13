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

    vector<int>arr = {0,0,1,0,1,2,2,2};
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

    //sort the list 

    int count0 = 0, count1=0, count2=0;

    Node* curr = head1;
    while(curr){
        if(curr->data == 0){
            count0++;
            curr = curr->next;
        }
        else if(curr->data == 1){
            count1++;
            curr = curr->next;
        }
        else{
            count2++;
            curr = curr->next;
        }
    }

  
    curr = head1;

    while(count0--){
        curr->data = 0;
        curr = curr->next;
    }
        while(count1--){
        curr->data = 1;
        curr = curr->next;
    }
    while(count2--){
        curr->data = 2;
        curr = curr->next;
    }

    display(head1);


    return 0;
}