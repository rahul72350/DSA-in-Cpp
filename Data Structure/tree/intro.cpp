#include<iostream>
#include<queue>
using namespace std;

//tree: it is type of data structure that represents the hierarichal relationship between data elements called nodes.
//binary tree: it is defined as a tree data structure where each node has atmos 2 childrens.

class Node{
    public:
    Node* left;
    Node* right;
    string data;

    Node(string val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int level_traversal(Node* root){
    queue<Node*>q;
    q.push(root);
    int count = 0;

    while(!q.empty()){
        Node* temp = q.front();
        cout<<temp->data<<endl;
        count++;

        if(temp->left != NULL){
        q.push(temp->left);
        }

        if(temp->right != NULL){
        q.push(temp->right);
        }
        
        q.pop();   
    }

    return count;
}


int main(){

    string x;
    cin>>x;
    queue<Node*>q;

    Node* root = new Node(x);
    q.push(root);
    string val1, val2;

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout<<"enter value1: ";
        cin>>val1;

        if(val1 != "NULL"){
        temp->left = new Node(val1);
        q.push(temp->left);
        }
        
        cout<<"enter value2: ";
        cin>>val2;

        if(val2 != "NULL"){
        temp->right = new Node(val2);
        q.push(temp->right);
        }
    
    }


    cout<<level_traversal(root);





    return 0;
}