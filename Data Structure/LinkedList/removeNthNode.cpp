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

    vector<int>arr = {1,2,3,4,5,6};
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

    //count the total node
    int totalnode = 0;
    temp = head;

    while(temp){
        temp = temp->next;
        totalnode++;
    }
    
    //delete Nth node
    cout<<endl;
    Node* removalNode = NULL;
    int n = 3;
    if(n == totalnode){
        removalNode = head;
        head = removalNode->next;
    }
    else{
    n = totalnode - n;
    temp = head;
    while(--n){
        temp = temp->next;
    }

    removalNode = temp->next;
    temp->next = removalNode->next;
    }

    delete removalNode;

    display(head);




    return 0;
}