#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Node 
{
    int data;
    Node *next; 
};
void linkedListTraversal(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << "\n";
        ptr = ptr->next;
    }
}
Node *insertAtFirst(Node *head, int data)
{
    Node *pt = (Node *)malloc(sizeof(Node));
    pt->data = data; 
    (*pt).next = head;
    return pt;
}
Node *insertAtmidIndex(Node *head, int data, int index)
{                                            
    Node *pt = (Node *)malloc(sizeof(Node)); 
    Node *p = head;
    int i = index - 2; 
    while (i--)
    {
        p = p->next;
    } 
    pt->data = data;
    pt->next = p->next; 
    p->next = pt;
    return head;
}
Node *insertAtEnd(Node *head, int data)
{
    Node *pt = new Node(); 
    Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = pt;
    pt->next = NULL;
    pt->data = data;
    return head;
}
void displayElementsInSortedOrder(Node *head)
{
    vector<int> v;
    Node *p = head;
    while (p->next != NULL)
    {
        v.push_back(p->data);
        p = p->next;
    }
    v.push_back(p->data); 
    sort(v.begin(), v.end());
    cout << " the elements of the linked list in sorted order : ";
    for (int x : v)
    {
        cout << x << " ";
    }
}
void reverseNodes(Node *head)
{
}
int main()
{
    struct Node *head; 
    Node *second;
    Node *third;
    cout << "size of the NOde is : " << sizeof(Node) << "\n";
    head = (Node *)malloc(sizeof(struct Node)); 
    second = (Node *)malloc(sizeof(Node));
    third = (Node *)malloc(sizeof(Node));
    head->data = 7;
    head->next = second;
    second->data = 11;
    second->next = third;
    third->data = 66;
    third->next = NULL;
    linkedListTraversal(head);
    cout << "lets insert 36"
         << "\n";
    head = insertAtFirst(head, 36);
    linkedListTraversal(head);
    cout << "lets insert 34 at 3"
         << "\n";
    insertAtmidIndex(head, 34, 3);
    linkedListTraversal(head);
    cout << "lets insert at End "
         << "\n";
    insertAtEnd(head, 355);
    linkedListTraversal(head);
    displayElementsInSortedOrder(head);
    return 0;
}
