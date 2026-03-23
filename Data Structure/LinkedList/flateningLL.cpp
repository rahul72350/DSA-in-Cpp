#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int val) {
        data = val;
        next = NULL;
        bottom = NULL;
    }
};

Node* merge(Node* head1, Node* head2){
    Node* head = new Node(0);
    Node* tail = head;

    while(head1 && head2){
        if(head1->data > head2->data){
            tail->bottom = head2;
            head2 = head2->bottom;
            tail = tail->bottom;
            tail->bottom = NULL;
        }
        else{
            tail->bottom = head1;
            head1 = head1->bottom;
            tail = tail->bottom;
            tail->bottom = NULL;
            
        }
    }
    
    if(head1){
        tail->bottom = head1;
    }
    else{
       tail->bottom = head2;
    }

    return head->bottom;
    
}


void display(Node* head){
    while(head){
        cout << head->data << " ";
        head = head->bottom;   // ✅ bottom, not next
    }
}


int main() {
    // Top row
    Node* head = new Node(5);
    head->next = new Node(10);
    head->next->next = new Node(19);
    head->next->next->next = new Node(28);
    head->next->next->next->next = new Node(30);

    // Column under 5
    head->bottom = new Node(7);
    head->bottom->bottom = new Node(8);
    head->bottom->bottom->bottom = new Node(30);

    // Column under 10
    head->next->bottom = new Node(20);
    head->next->bottom->bottom = new Node(40);

    // Column under 19
    head->next->next->bottom = new Node(22);
    head->next->next->bottom->bottom = new Node(50);

    // Column under 28
    head->next->next->next->bottom = new Node(35);
    head->next->next->next->bottom->bottom = new Node(40);
    head->next->next->next->bottom->bottom->bottom = new Node(45);

    // Column under 30 (last)
    head->next->next->next->next->bottom = new Node(34);
    head->next->next->next->next->bottom->bottom = new Node(40);



    Node* head1;
    Node* head2;
    Node* head3;

    while(head->next){
        head1 = head;
        head2 = head->next;
        head3 = head->next->next;

        head1->next = NULL;
        head2->next = NULL;

        head = merge(head1,head2);
        head->next = head3;

    }


    display(head);





    return 0;
}