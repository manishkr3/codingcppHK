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
void displayLL(Node*head){//we dont need want to change original head so don't cbr also now we can use head uncautiously
    while (head!=NULL)//we are reached at end pointer but we want to run whats inside the loop so
    // we don't use head->next!=NULL
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL"<<endl;
}
void insertAtTail(Node *&head, int val)//we need to change head if it is NULL therefore cbr but now also
{//we have to take care of head cautiously because any changes to head will reflect back there fore we will 
// use temp wherever only value is needed.
    Node *newNode = new Node(val);
    if(head==NULL){
        head = newNode;
        return;
    }
    Node *temp=head;
    while(temp->next!=NULL){// we reached at last node and we don't want to run what inside the loop at last
    //because it will shift us to next full NULL node.
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->data = val;
}
void insertAtHead(Node*&head,int val){
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    newNode->data = val;
}
bool searchLL(Node*head,int key){
    while (head!=NULL)
    {
        if (head->data==key)
        {
            return true;
        }
        head = head->next;
    }
    return false;
}
int main()
{
    Node *head = new Node(1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    displayLL(head);
    insertAtHead(head, 0);
    insertAtHead(head, -1);
    displayLL(head);
    cout << searchLL(head, 4)<<endl;
    return 0;
}