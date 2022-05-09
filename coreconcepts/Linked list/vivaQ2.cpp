#include<iostream>
using namespace std;
class Node
{
public:
    int str;
    Node *next;
    Node(int str)
    {
        this->str = str;
        next = NULL;
    }
    Node();
};
void displayLL(Node*head){
while(head->next!=NULL){
    cout << head->str << "->";
}
cout << "NULL" << endl;
}

void insertAtTail(Node *&head, int val) 
{                                       
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {   
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->str = val;
}


int main()
{
    Node *head = new Node(1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    displayLL(head);
    return 0;
}