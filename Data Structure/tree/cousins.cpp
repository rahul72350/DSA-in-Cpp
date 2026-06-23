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




//finding whether parent is same or different
bool parent(Node* root, int a, int b){
    if(root == NULL){
        return 0;
    }

    if(root->left && root->right){
        if(root->left->data == a && root->right->data == b){
            return 1;
        }
        if(root->left->data == b && root->right->data == a){
            return 1;
        }
    }

    return parent(root->left,a,b) || parent(root->right, a, b);
}
//determine two nodes are cousins or not
bool Iscousins(Node* root,int data1, int data2){
    queue<Node*>q;
    q.push(root);
    int l1 = -1, l2 = -1;
    int level = 0;

    while(!q.empty()){
        int n = q.size();
        while(n--){
            Node* temp = q.front();
            q.pop();

            if(temp->data == data1){
                l1 = level;
            }
            if(temp->data == data2){
                l2 = level;
            }

            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }

        if(l1 != l2){
            return 0;
        }
        if(l1 != -1){
            break;
        }
    }

    return !parent(root,data1,data2);
}


int main(){



    return 0;
}