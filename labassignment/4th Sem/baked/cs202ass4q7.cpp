#include <iostream>
using namespace std;
class Node
{
public:
    char data;
    Node *next, *prev;
    Node(int newData)
    {
        data = newData;
        prev = next = NULL;
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
    head->prev = newNode;
    head = newNode;
}
void insertNewNodeAtTail(Node *&head, char data)
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
    newNode->prev = temp;
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
        while (head)
        {
            cout << head->data << " <-> ";
            head = head->next;
        }
        cout << "NULL \n";
    }
}
void deleteFromHead(Node *&head)
{ // supporting function
    head = head->next;
    head->prev->next = NULL;
    delete head->prev;
}
void deleteFromTail(Node *tail)
{ // supporting function
    tail = tail->prev;
    tail->next->prev = NULL;
    delete tail->next;
    tail->next = NULL;
}

void deleteNthNode(Node *&head, int n)
{ // function
    if (head == NULL || n < 1)
        return;
    if (n == 1)
    {
        deleteFromHead(head);
        return;
    }
    Node *temp = head;
    for (int i = 1; i < n && temp; i++)
        temp = temp->next;
    if (!temp)
        return;
    if (!temp->next)
    {
        deleteFromTail(temp);
        return;
    }
    Node *previous = temp->prev;
    temp->prev = NULL;
    previous->next = temp->next;
    temp->next = NULL;
    temp = previous->next;
    delete temp->prev;
    temp->prev = previous;
}
void removeDuplicateNodes(Node *&head)
{
    Node *temp = head, *flag = head->next;
    for (int i = 1; temp->next; i++)
    {
        flag = temp->next;
        for (int j = i + 1; flag != NULL; j++)
        {
            if (flag->data == temp->data)
            {
                flag = flag->prev;
                deleteNthNode(head, j); /* deleteNthNode() refers
to Qus 4 */
                j -= 1;
            }
            flag = flag->next;
        }
        if (temp->next)
            temp = temp->next;
    }
}
void deleteLargestNode(Node *&head)
{
    Node *max = head;
    int maxIndex = 1;
    Node *temp = head;
    for (int i = 1; temp; i++)
    {
        if (temp->data > max->data)
        {
            max = temp;
            maxIndex = i;
        }
        temp = temp->next;
    }
    deleteNthNode(head, maxIndex); /* deleteNthNode() refers to Qus 4 */
}
void rotateNcounterMclockWise(Node *&head, int n, int m)
{
    Node *temp = head, *tail = head;
    for (int i = 1; i < n; i++)
    {
        temp = temp->next;
        tail = tail->next;
    } /*going ahead ie. counter clockwise*/
    while (tail->next)
        tail = tail->next;
    tail->next = head;
    head->prev = tail;
    for (int i = 1; i < m; i++)
        temp = temp->prev; /*going back ie. clockwise*/
    temp->prev->next = NULL;
    temp->prev = NULL;
    head = temp;
}
int main()
{
    Node *head = NULL;
    insertNewNodeAtTail(head, '1');
    insertNewNodeAtTail(head, '2');
    insertNewNodeAtTail(head, '3');
    insertNewNodeAtTail(head, '4');
    insertNewNodeAtTail(head, '5');
    showAllData(head);
    rotateNcounterMclockWise(head, 4, 3);
    showAllData(head);
    return 0;
}