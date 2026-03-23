#include<iostream>
#include<vector>
using namespace std;

// Node class
class Node{
public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

// display
void display(Node* temp){
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// reverse function
Node* reverseList(Node* head){
    Node* curr = head;
    Node* prev = NULL;

    while(curr){
        Node* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}

int main(){

    vector<int> arr1 = {0, 0, 0, 2, 3, 7, 1};
    vector<int> arr2 = {0, 0, 3, 1, 1, 2};

    //first LL
    Node* head1 = NULL;
    Node* temp = NULL;

    for(int x : arr1){
        if(head1 == NULL){
            head1 = new Node(x);
            temp = head1;
        } else {
            temp->next = new Node(x);
            temp = temp->next;
        }
    }

    //second LL
    Node* head2 = NULL;
    temp = NULL;

    for(int x : arr2){
        if(head2 == NULL){
            head2 = new Node(x);
            temp = head2;
        } else {
            temp->next = new Node(x);
            temp = temp->next;
        }
    }

    cout << "Original Lists:\n";
    display(head1);
    display(head2);

    // reverse both
    head1 = reverseList(head1);
    head2 = reverseList(head2);

    cout << "\nReversed Lists:\n";
    display(head1);
    display(head2);

    // add two numbers
    Node* dummy = new Node(0);
    Node* curr = dummy;

    int carry = 0;

    while(head1 || head2 || carry){
        int sum = carry;

        if(head1){
            sum += head1->data;
            head1 = head1->next;
        }

        if(head2){
            sum += head2->data;
            head2 = head2->next;
        }

        carry = sum / 10;
        curr->next = new Node(sum % 10);
        curr = curr->next;
    }

    Node* result = dummy->next;



    // reverse result
    result = reverseList(result);

    temp = result;

    while(temp->data == 0){
        temp = temp->next;
    }

    cout << "\nFinal Answer:\n";
    display(temp);

    return 0;
}