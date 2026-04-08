#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Node{
    public:
    int index;
    Node* next;
    Node(int x){
        index = x;
        next = NULL;
    }
};


class Nstack{
    public:
    int *arr;
    Node **top;
    stack<int>st;
    Nstack(int n, int s){
        arr = new int[s];
        top = new Node* [n];
        for(int i = 0; i < n; i++){
            top[i] = NULL;
        }
        for(int i = 0; i < s; i++){
            st.push(i);
        }
    }

    bool push(int x, int m){
    if(st.empty()){
        return 0;
    }

    arr[st.top()] = x;
    Node* temp = new Node(st.top());
    temp->next = top[m-1];
    top[m-1] = temp;
    st.pop();
    return 1; 
    }

    int pop(int m){
        if(top[m-1] == NULL){
            return -1;
        }

        st.push(top[m-1]->index);
        int element = arr[top[m-1]->index];
        top[m-1] = top[m-1]->next;
        return element;
    }
};




int main(){





    return 0;
}