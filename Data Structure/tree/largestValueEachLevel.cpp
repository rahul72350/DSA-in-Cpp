#include<iostream>
#include<queue>
#include<vector>
#include<climits>
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
    cout<<"enter value of node: ";
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

    queue<Node*>q;
    vector<int>v;
    int n;
    int maxi = INT_MIN;

    Node* root = tree();
    if(root == NULL){
        return 0;
    }

    q.push(root);
    
    while (!q.empty()){
        n = q.size();
        
        while(n--){
            Node* temp = q.front();
            q.pop();
            maxi = max(maxi,temp->data);
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }

        v.push_back(maxi);
        maxi = INT_MIN;
    }

    for(int i: v){
        cout<<i<<" ";
    }
    
    
    


    return 0;
}