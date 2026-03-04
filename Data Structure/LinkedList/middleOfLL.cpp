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

    temp = head;
    int totalNode = 0;

    while(temp){
        temp = temp->next;
        totalNode++;
    }

    cout<<"total node is: "<<totalNode<<endl;

    temp = head;
    totalNode /= 2;

    while(totalNode--){
        temp = temp->next;
    }

    cout<<"middle node's data using two loops is: "<<temp->data<<endl;


    //in above approach we need to traverse the linked list two times but if i want to find the middle node in one traverse
    //here comes the concept of fast pointer and slow pointer

    Node *fast = head;
    Node *slow = head;

    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }

    cout<<"middle node's using only one loop data is: "<<slow->data<<endl;




    return 0;
}