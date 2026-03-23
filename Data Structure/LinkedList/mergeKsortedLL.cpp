#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};


Node* merge(Node* head1, Node* head2){
    Node* head = new Node(0);
    Node* tail = head;

    while(head1 && head2){
        if(head1->data > head2->data){
            tail->next = head2;
            head2 = head2->next;
            tail = tail->next;
            tail->next = NULL;
        }
        else{
            tail->next = head1;
            head1 = head1->next;
            tail = tail->next;
            tail->next = NULL;
            
        }
    }
    
    if(head1){
        tail->next = head1;
    }
    else{
       tail->next = head2;
    }

    return head->next;
    
}


Node* createList(vector<int> arr) {
    Node* head = new Node(arr[0]);
    Node* temp = head;

    for(int i = 1; i < arr.size(); i++) {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }

    return head;
}


void display(Node* head){
    while(head){
        cout << head->data << " ";
        head = head->next;   // ✅ bottom, not next
    }
}


int main() {

    vector<vector<int>> arr = {
        {1,2,4},
        {3,6},
        {4,5,9,10},
        {7},
        {6,8},
        {2,7,8,10},
        {17,19,22},
        {4,18}
    };

    int k = arr.size();

    vector<Node*> lists(k);

    for(int i = 0; i < k; i++) {
        lists[i] = createList(arr[i]);
    }

  

    Node* head = lists[0];

    for(int i = 1; i < k; i++){
        head = merge(head, lists[i]);
    }

    display(head);

    return 0;
}