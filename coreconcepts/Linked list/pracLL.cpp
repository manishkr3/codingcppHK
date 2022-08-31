#include <iostream>
using namespace std;
class Node
{public:
    int num;
    Node *next;
    Node(int num)
    {
        this->num = num;
        next = NULL;
    }
};
void insertAtHead(Node *&head, int num)
{
    Node *newNode = new Node(num);
    newNode->num = num;
    newNode->next = head;
    head = newNode;
}
void displayLL(Node *head)
{
    while (head != NULL)
    {
        cout << head->num << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    Node *head = new Node(1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    displayLL(head);
    return 0;
}
