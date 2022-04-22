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
void insertAtTail(Node *head, int val)
{
    Node *newNode = new Node(val);
    while (head->next != NULL)
    {
        head = head->next;
    }
    head->next = newNode;
}
void displayLL(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL\n";
}
Node* reverseLLIter(Node *head)
{
    Node *previous=NULL, *current=head, *next;
    while (current!=NULL)
    {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
   
    return previous; //yes I did it
}
Node*reverseLLrec(Node*&head){
    if (head==NULL||head->next==NULL)
    {
        return head;
    }

    Node *newHead = reverseLLrec(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}
int main()
{
    Node *head = new Node(1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    displayLL(head);
    Node*newHead=reverseLLIter(head);
    displayLL(newHead);
    Node*newHead2 = reverseLLrec(newHead);//because now old "head"is pointing to NULL
    displayLL(newHead2);
    return 0;
}
//ya to bhai Node*head karle ya Node head.