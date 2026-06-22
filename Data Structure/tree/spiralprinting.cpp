#include<iostream>
#include<stack>
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


int main(){

    Node* root = tree();
    
    stack<Node*>st1;
    stack<Node*>st2;

    st1.push(root);


    while(!st1.empty() || !st2.empty()){

        if(!st1.empty()){
            while(!st1.empty()){
                Node* temp = st1.top();
                st1.pop();
                cout<<temp->data<<" ";
                if(temp->right)
                st2.push(temp->right);
                if(temp->left)
                st2.push(temp->left);
            }
        }
        
        if(!st2.empty()){
            while(!st2.empty()){
                Node* temp = st2.top();
                st2.pop();
                cout<<temp->data<<" ";
                if(temp->left){
                    st1.push(temp->left);
                }
                if(temp->right){
                    st1.push(temp->right);
                }
                
                
            }
        }
    }






    return 0;
}