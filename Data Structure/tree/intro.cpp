#include<iostream>
#include<queue>
using namespace std;

//tree: it is type of data structure that represents the hierarichal relationship between data elements called nodes.
//binary tree: it is defined as a tree data structure where each node has atmos 2 childrens.

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


    return 0;
}