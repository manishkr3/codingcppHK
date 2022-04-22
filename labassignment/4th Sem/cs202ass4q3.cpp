#include <iostream>
#include <stack>
using namespace std;
class Node
{
public:
    char data;
    Node *next;
    Node(char newData)
    {
        data = newData;
        next = NULL;
    }
};
void insertNewNodeAtHead(Node *&head, char data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void insertNewNodeAtTail(Node *&head, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

void showAllData(Node *head)
{
    if (head == NULL)
    {
        cout << "linked list is empty!";
        return;
    }
    else
    {
        while (head != NULL)
        {
            cout << head->data << "->";
            head = head->next;
        }
        cout << "NULL";
    }
}
void findNthNodeFromLast(Node *head, int n, int m)
{ // m is size (already given)
    if (n > m)
        return;
    Node *flag = head;
    for (int i = 1; i <= (m - n); i++)
        flag = flag->next;
    cout << flag->data; // flag is the nth node from last
}

int main()
{
    Node *head = NULL;
    insertNewNodeAtTail(head, 'g');
    insertNewNodeAtTail(head, 'o');
    insertNewNodeAtTail(head, 'o');
    insertNewNodeAtTail(head, 'g');
    insertNewNodeAtTail(head, 'l');
    insertNewNodeAtTail(head, 'e');
    showAllData(head);
    findNthNodeFromLast(head, 2, 6);
    cout << endl;
    return 0;
}