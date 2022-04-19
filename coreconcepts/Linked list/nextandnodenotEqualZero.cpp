#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
void displayLL(Node *head)
{                        // we dont need want to change original head so don't cbr also now we can use head uncautiously
    while (head != NULL) // we are reached at end pointer but we want to run whats inside the loop so
    // we don't use head->next!=NULL
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}
void insertAtTail(Node *&head, int val) // we need to change head if it is NULL therefore cbr but now also
{                                       // we have to take care of head cautiously because any changes to head will reflect back there fore we will
    // use temp wherever only value is needed.
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {   // we reached at last node and we don't want to run what inside the loop at last
        // because it will shift us to next full NULL node.
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->data = val;
}
void insertAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    newNode->data = val;
}
void while1(Node*head){
    while (head!=NULL)//this loop will run for even last node,at last what we get is pointer at NULL
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
void while2(Node *head){
    while (head->next!=NULL)//this loop will not run for last node,at last pointer will be at last node
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    Node *head = new Node(1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    displayLL(head);
    while1(head);
    while2(head);
    return 0;
}