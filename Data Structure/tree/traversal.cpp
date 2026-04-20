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

//types of traversal
//preorder traversal: visit node then go to it's left and then it's right. (NLR)
//inorder traversal: left then node then right (LNR)
//post order traversal: left then right then node (LRN)

//preorder traversal
void preorder(Node* temp){
    if(temp == NULL) return;

    cout<<temp->data;
    preorder(temp->left);
    preorder(temp->right);

}

//inorder traversal
void inorder(Node* temp){
    if(temp == NULL) return;

    inorder(temp->left);
    cout<<temp->data;
    inorder(temp->right);
} 

//postorder traversal 
void postorder(Node* temp){
    if(temp == NULL) return;

    postorder(temp->left);
    postorder(temp->right);
    cout<<temp->data;
}

//level order traversal
void levelOrderTraversal(Node* root){
     
    if(root == NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout << temp->data << " ";
       
        if(temp->left != NULL){
            q.push(temp->left);
        }

        if(temp->right != NULL){
            q.push(temp->right);
        }
    }

   
}

int getSize(Node* root){
    if(!root) return 0;
    return 1 + getSize(root->left) + getSize(root->right);
}




int main(){

    Node* root = tree();

    // cout<<"preorder traversal: ";
    // preorder(root);
    // cout<<endl;
    // cout<<"postorder traversal: ";
    // postorder(root);
    // cout<<endl;
    // cout<<"inorder traversal: ";
    // inorder(root);
    // cout<<endl;


    levelOrderTraversal(root);
    cout<<"size of tree is: "<<getSize(root);

    


    return 0;
}