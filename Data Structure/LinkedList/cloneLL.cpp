#include <iostream>
using namespace std;

// Node structure
class Node
{
public:
    int data;
    Node *next;
    Node *random;

    Node(int data)
    {
        this->data = data;
        next = NULL;
        random = NULL;
    }
};

// Function to print list
// Function to print list
void printList(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << "Node: " << temp->data;

        if (temp->next != NULL)
            cout << ", Next: " << temp->next->data;
        else
            cout << ", Next: NULL";

        if (temp->random != NULL)
            cout << ", Random: " << temp->random->data;
        else
            cout << ", Random: NULL";

        cout << endl;

        temp = temp->next;
    }
}

void display(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next; // ✅ bottom, not next
    }
}

int main()
{
    // Step 1: Create nodes
    Node *n1 = new Node(1);
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);
    Node *n5 = new Node(5);

    // Step 2: Connect next pointers
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    // Step 3: Connect random pointers
    n1->random = n3; // 1 → 3
    n2->random = n5; // 2 → 5
    n3->random = n1; // 3 → 1
    n4->random = n3; // 4 → 3
    n5->random = n2; // 5 → 2

    // Head of the list
    Node *head = n1;

    // Step 4: Print list
    printList(head);
    cout << endl;

    // create clone

    Node *headcopy = new Node(0);
    Node *temp = head;
    Node *temp2 = headcopy;

    while (temp)
    {
        temp2 = temp->next;
        temp->next = new Node(temp->data);
        temp = temp->next;
        temp->next = temp2;
        temp = temp->next;
    }

    display(head);

    temp = head;
    while (temp)
    {
        Node *copy = temp->next;

        if (temp->random != NULL)
            copy->random = temp->random->next;
        else
            copy->random = NULL;

        temp = temp->next->next; 
    }

    // now extract the clone

    temp = head;
    headcopy = temp->next;

    while (temp)
    {
        Node *copy = temp->next;

        temp->next = copy->next; 

        if (copy->next != NULL)
            copy->next = copy->next->next; 

        temp = temp->next;
    }

    cout << endl;
    printList(headcopy);

    return 0;
}