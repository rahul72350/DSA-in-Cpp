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

    cout<<temp->data<<endl;
    display(temp->next);
}


//reversing node
Node* reverse(Node* temp, Node* next){

    if(temp->next == NULL){
        temp->next = next;
        return temp;
    }

    Node* ref = temp->next;
    temp->next = next;
    return reverse(ref,temp);
}


int main(){

    vector<int>arr = {1,2,3,4,5};
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


    //reversed linked list by value
    // vector<int>ans;

    // temp = head;

    // while(temp != NULL){
    //     ans.push_back(temp->data);
    //     temp = temp->next;
    // }

    // temp = head;
    // int index = ans.size()-1;
    // while(temp != NULL){
    //     temp->data = ans[index];
    //     index--;
    //     temp = temp->next;
    // }

    // cout<<endl;

    cout<<"reversed linked list"<<endl;

    //reverse linked list by node
    head = reverse(head,NULL);
    display(head);

    return 0;
}