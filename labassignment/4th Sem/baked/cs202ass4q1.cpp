#include <iostream>
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
void retainMdeleteN(Node *head, int m, int n)
{
    Node *deleteMe, *temp;
    while (head != NULL)
    {
        for (int i = 1; i < m && head != NULL; i++)
            head = head->next;
        if (head == NULL)
            return;
        temp = head->next;
        for (int i = 0; i < n && temp != NULL; i++)
        {
            deleteMe = temp;
            temp = temp->next;
            delete deleteMe;
        }
        head->next = temp;
        head = temp;
    }
}
int main()
{
    Node *head = NULL;
    insertNewNodeAtTail(head, 's');
    insertNewNodeAtTail(head, 't');
    insertNewNodeAtTail(head, 'r');
    insertNewNodeAtTail(head, 'u');
    insertNewNodeAtTail(head, 'c');
    insertNewNodeAtTail(head, 't');
    insertNewNodeAtTail(head, 'u');
    insertNewNodeAtTail(head, 'r');
    insertNewNodeAtTail(head, 'e');
    showAllData(head);
    retainMdeleteN(head, 3, 2);
    cout << endl;
    showAllData(head);
    cout << endl;
    return 0;
}