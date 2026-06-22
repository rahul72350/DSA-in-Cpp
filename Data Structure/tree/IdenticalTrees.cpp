#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node{
    public:
    Node* left;
    Node* right;
    int data;

    Node(int val){
        data = val;
    }
};


Node* tree(){
    int x;
    cin>>x;

    if(x == -1){
        return NULL;
    }

    Node* temp = new Node(x);
    cout<<"enter the data of left child: ";
    temp->left = tree();
    cout<<"enter the data of right child: ";
    temp->right = tree();
    return temp;
}

//preorder traversal
void preorder(Node* temp){
    if(temp == NULL) return;

    cout<<temp->data;
    preorder(temp->left);
    preorder(temp->right);

}

bool isIdentical(Node* r1, Node* r2){
    if(r1 == NULL && r2 == NULL){
        return true;
    }

    if((!r1 && r2) || (r1 && !r2)){
        return 0;
    }

    if(r1->data != r2->data){
        return 0;
    }

    return isIdentical(r1->left,r2->left) && isIdentical(r1->right,r2->right);
}

int height(Node* root, bool& valid){

    if(!root){
        return 0;
    }
    
    int l = height(root->left, valid);
    int r = height(root->right, valid);
    if(abs(l-r) > 1){
        valid = 0;
    }
    return 1 + max(l,r);
}


bool checkedBalanceTree(Node* root){
    bool valid = 1;
    height(root, valid);
    return valid;
}

void mirrorTree(Node* root){
    if(!root){
        return;
    }
    Node* temp = root->right;
    root->right = root->left;
    root->left = temp;
    mirrorTree(root->left);
    mirrorTree(root->right);
}


int main(){





    return 0;
}