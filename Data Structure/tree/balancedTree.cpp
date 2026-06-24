#include<iostream>
#include<queue>
#include<vector>
using namespace std;

//node creation

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

//creating tree

Node* tree(){
    int x;
    cout<<"enter data: ";
    cin>>x;
    if(x == -1){
        return NULL;
    }
    Node* temp = new Node(x);
        temp->left = tree();
        temp->right = tree();
        return temp;
    
}

int height(Node* root, bool& balance){
    if(root == NULL){
        return 0;
    }

    int l = height(root->left,balance);
    int r = height(root->right, balance);

    if(abs(l-r) > 1){
        balance = 0;
    }

    return 1 + max(l,r);
}

bool isBalanced(Node* root){
    bool balance = 1;
    height(root,balance);
    return balance;
}


int main(){

    Node* root = tree();
    cout<<isBalanced(root);

    return 0;
}