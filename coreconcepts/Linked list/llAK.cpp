/* Key Points
/1. head :it always points to the first element of the LL. Whatever function you are writing make 
sure at its end head points to the first element eg.insert at head
2. pass by reference ki need only when we need to change head at original eg. insertAtBeginning
 */
#include <iostream>
using namespace std;
class Node
{
public:
    int data;   //! fonts change karke dekhio to mint k, vaise isme bhi vaisa hi dikhta h
    Node *next; //! Consolas, 'Courier New', monospace,'Cascadia Code PL'
    Node(int data)
    { // constructor to initialize the node while allocating it in heap
        this->data = data;
        next = NULL;
    }
    // Node(){};//!if we make any parameterised constructor then default one vanishes away.
};
void insertAtTail(Node *&head, int val) // Node* is data type and &head is use to call by reference
{                                       // shortcut of cbr is used
    Node *newNode = new Node(val);
    if (head == NULL)
    { // now if our head is null means not any node in head then we also have to check on that
        head = newNode;
        return; // we can also return in void
    }
    Node *newNode = head;
    while (newNode->next != NULL) // to find newNode as last element
    {
        newNode = newNode->next;
    }
    newNode->next = newNode;
}
void insertAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void displayLL(Node *head) // displayLL  and scanLL i will use now and on
{

    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL"
         << "\n";
}
int main()
{
    Node *head = new Node(0);
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    cout << "elements in the ll are"
         << "\n";
    displayLL(head);
    Node *head1 = NULL;
    insertAtTail(head1, 1);
    insertAtTail(head1, 2);
    cout << "elements in the ll1 are"
         << "\n";
    displayLL(head1);
    insertAtHead(head1, 0);
    cout << "after adding at head1 in ll1"
         << "\n";
    displayLL(head1);
    return 0;
}
