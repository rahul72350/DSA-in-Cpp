#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* tree(){
    int x;
    cout<<"enter node value: ";
    cin>>x;

    if(x == -1){
        return NULL;
    }

    Node* temp = new Node(x);
    temp->left = tree();
    temp->right = tree();
}


int size(Node* root){
    if(root == NULL){
        return 0;
    }
    return 1 + (size(root->left) + size(root->right));
}

int main(){

    Node* root = tree();
    cout<<"size of binary tree is: "<<size(root);



    return 0;
}