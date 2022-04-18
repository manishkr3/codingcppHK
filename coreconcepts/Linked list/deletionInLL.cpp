#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};
void insertAtTail(Node*head,int val){
    Node *newNode = new Node(val);
    while (head->next != NULL)
    {
        head = head->next;
    }
    head->next = newNode;
}
void displayLL(Node*head){
    while (head->next!=NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL\n";
}
void delete
int main()
{
    Node *head = new Node(1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    displayLL(head);
    return 0;
}