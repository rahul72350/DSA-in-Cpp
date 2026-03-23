#include <iostream>
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


int main() {

    // Common part (5 → 6 → 7)
    Node* common = new Node(5);
    common->next = new Node(6);
    common->next->next = new Node(7);

    // First list: 1 → 2 → 3 → 4 → 5 → 6 → 7
    Node* head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(3);
    head1->next->next->next = new Node(4);

    // Connect to common part
    head1->next->next->next->next = common;

    // Second list: 8 → 9 → 5 → 6 → 7
    Node* head2 = new Node(8);
    head2->next = new Node(9);

    // Connect to same common part
    head2->next->next = common;

    // Print List 1
    cout << "List 1: ";
    Node* temp = head1;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

    // Print List 2
    cout << "List 2: ";
    temp = head2;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }


    //main task is we have to detect intersection point in Y shaped linked list

    int c1 = 0;
    temp = head1;

    while(temp){
        c1++;
        temp = temp->next;
    }

    int c2 = 0;
    temp = head2;

    while(temp){
        c2++;
        temp = temp->next;
    }

    cout<<"total length of c1 is: "<<c1<<endl;
    cout<<"total length of c2 is: "<<c2<<endl;

    int counter;

    if(c1 > c2){
        counter = c1 - c2;
        temp = head1;
        while(counter--){
            temp = temp->next;
        }
        Node* temp2 = head2;
        while(temp2 != temp){
            temp = temp->next;
            temp2 = temp2->next;
        }

        cout<<"intersecting point is: "<<temp->data<<endl;
    }
    else{
        
        counter = c2 - c1;
        temp = head2; 

        while(counter--){
            temp = temp->next;
        }

        Node* temp2 = head1;
        while(temp2 != temp){
            temp = temp->next;
            temp2 = temp2->next;
        }

        cout<<"intersection point is: "<<temp->data<<endl;

    }




    return 0;
}