#include<iostream>
#include<vector>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};


Node* insert_start(vector<int>&arr,int index,int size){
    if(index == size){
        return NULL;
    }

    Node* temp;
    temp = new Node(arr[index]);
    temp->next = insert_start(arr,index+1,size);
    return temp;

}

Node* insert_last(vector<int>&arr,int index, int size, Node* addr){
    if(index == size){
        return addr;
    }

    Node* temp;
    temp = new Node(arr[index]);
    temp->next = addr;
    return insert_last(arr,index+1,size, temp);

}

//insertion at middle

void insert_mid(int x,int i,Node* temp,int val){
    if(x == i){
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
        return;
    }

    temp = temp->next;
    insert_mid(x,i+1,temp,val);
}

void display(Node* temp){
    if(temp == NULL){
        return ;
    }

    cout<<temp->data<<endl;
    display(temp->next);
}

int main(){

    vector<int>arr = {1,2,3,4,5};

    Node* head = NULL;

    //head = insert_start(arr,0,arr.size());

    head = insert_last(arr,0,arr.size(),NULL);
    insert_mid(2,1,head,55);

    display(head);

    return 0;
}