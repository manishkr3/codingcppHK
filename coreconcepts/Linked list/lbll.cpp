#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
void insertAtMiddle(Node *&head, Node *&tail, int data, int position)
{
    // insert at start
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        if(temp==NULL){
            cout << "max position to insert is: " << cnt << endl;
            return;
        }
        temp = temp->next;
        cnt++;
    }
    if(temp==NULL){
        cout << "max position to insert is: " << cnt<<endl;
        return;
    }
    // because we have to update tail if we are changing last element.
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }
    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}
void deleteAtPosition(Node*&head,int position){
    Node *temp = head;
    int cnt = 1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    Node*nodeToDelete= temp->next;
    temp->next = nodeToDelete->next;
    delete nodeToDelete;
}
void printLL(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    Node *head = new Node(0);
    Node *tail = head;
    cout << head->data << endl;
    // insertAtHead(head, 12);
    // insertAtHead(head, 2);
    // insertAtHead(head, 3);
    // printLL(head);
    insertAtTail(tail, 1);
    insertAtTail(tail, 2);
    insertAtTail(tail, 3);
    printLL(head);
    insertAtMiddle(head,tail, 333, 3);
    printLL(head);
    insertAtMiddle(head, tail,444, 1);
    printLL(head);
    insertAtMiddle(head, tail, 999, 7);
    printLL(head);
    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;
    deleteAtPosition(head, 3);
    printLL(head);
    return 0;
}