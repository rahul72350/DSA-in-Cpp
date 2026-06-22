#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

class Node{
    public:
    Node* left;
    Node* right;
    int data;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};


// Node* tree(){
//     int x;
//     cin>>x;

//     if(x == -1){
//         return NULL;
//     }

//     Node* temp = new Node(x);
//     cout<<"enter the data of left child: ";
//     temp->left = tree();
//     cout<<"enter the data of right child: ";
//     temp->right = tree();
//     return temp;
// }


int sumOfBinTree(Node* root){
    if(root == NULL) return 0;
  
    return (root->data + sumOfBinTree(root->left) + sumOfBinTree(root->right));
}

int countLeaf(Node* root){
    if(!root){
        return 0;
    }

    if(!root->right && !root->left){
        return 1;
    }

    return (countLeaf(root->left) + countLeaf(root->right));
}

int countNonLeaf(Node* root){
    if(!root){
        return 0;
    }

    if(!root->right && !root->left){
        return 0;
    }

    return (1+countNonLeaf(root->left) + countNonLeaf(root->right));
}

int size(Node* root, int count){
    if(root == NULL){
        return count;
    }

    return;
}

int size(Node* root){
    if(root == NULL){
        return 0;
    }
    
    return 1 + max(size(root->left),size(root->right));
}


int main(){
    int x;
    cin>>x;
    queue<Node*>q;

    Node* root = new Node(x);
    q.push(root);
    int val1, val2;

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout<<"enter value1: ";
        cin>>val1;

        if(val1 != -1){
        temp->left = new Node(val1);
        q.push(temp->left);
        }
        
        cout<<"enter value2: ";
        cin>>val2;

        if(val2 != -1){
        temp->right = new Node(val2);
        q.push(temp->right);
        }
    
    }

    cout<<"sum of Nodes: "<<sumOfBinTree(root)<<endl;
  

    return 0;
}