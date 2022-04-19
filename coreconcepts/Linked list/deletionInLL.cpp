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
void deletionAtHead(Node *&head)
{
    // delete head; if we delete head directly we get segmentation fault because we cant able to access the ll
    Node *toDelete = head;
    head = head->next;
    delete toDelete;
}
void deletionLL(Node*head,int key){
    if (head==NULL)
    {
        return;
    }
    if (head->next==NULL)
    {
        deletionAtHead(head);
        return;
    }

    // while (head->next!=NULL)
    // {
    //     if (head->next->data==key)
    //     {
    //         break;
    //     }
    //     head = head->next;
    // }This is not looks that much efficient
    //!corner case is if user wants to delete head so by using orp we make deletionAtHead()
    while (head->next->data != key)
    {
        head = head->next;
    }

    Node *toDelete = head->next;
    head->next = head->next->next;
    delete toDelete;
}

int main()
{
    Node *head = new Node(1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    displayLL(head);
    deletionLL(head, 3);
    displayLL(head);
    deletionAtHead(head);
    displayLL(head);
    return 0;
}
//!delete element from the heap after unlinking is very important else memory will leak.
//ye kya bakwas sa scene h re if you are writing only definitions for functions and want to use one 
//function in other one then declare it before the other or declare this function at start and define later.
//ab samajh aya meko why aisa hota h ki declare alag se karo or define alag se - so that scope problem will
//be resolved because cpp runs line by line.