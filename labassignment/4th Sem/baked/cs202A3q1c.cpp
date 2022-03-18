#include<iostream>
using namespace std;
struct Node
{
    int coeff, power;
    Node *next;
};
Node *addNode(Node *start, int coeff, int power)
{
    Node *newnode = new Node;
    newnode->coeff = coeff;
    newnode->power = power;
    newnode->next = NULL;
    if (start == NULL)
        return newnode;
    Node *ptr = start;
    while (ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = newnode;
    return start;
}
void displayList(struct Node *ptr)
{
    while (ptr->next != NULL)
    {
        cout << ptr->coeff << "x^" << ptr->power;
        if (ptr->next != NULL && ptr->next->coeff >= 0)
            cout << "+";
        ptr = ptr->next;
    }
    cout << ptr->coeff << "\n";
}
void removeDuplicates(Node *start)
{
    Node *ptr1, *ptr2, *dup;
    ptr1 = start;
    while (ptr1 != NULL && ptr1->next != NULL)
    {
        ptr2 = ptr1;
        while (ptr2->next != NULL)
        {
            if (ptr1->power == ptr2->next->power)
            {
                ptr1->coeff = ptr1->coeff + ptr2->next->coeff;
                dup = ptr2->next;
                ptr2->next = ptr2->next->next;
                delete (dup);
            }
            else
                ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
}
Node *multiplyLL(Node *poly1, Node *poly2,
               Node *poly3)
{
    Node *ptr1, *ptr2;
    ptr1 = poly1;
    ptr2 = poly2;
    while (ptr1 != NULL)
    {
        while (ptr2 != NULL)
        {
            int coeff, power;
            coeff = ptr1->coeff * ptr2->coeff;
            power = ptr1->power + ptr2->power;
            poly3 = addNode(poly3, coeff, power);
            ptr2 = ptr2->next;
        }
        ptr2 = poly2;
        ptr1 = ptr1->next;
    }
    removeDuplicates(poly3);
    return poly3;
}
int main()
{
    Node *poly1 = NULL, *poly2 = NULL, *poly3 = NULL;
    poly1 = addNode(poly1,8 , 3);
    poly1 = addNode(poly1, 9, 1);
    poly1 = addNode(poly1, -6, 0);
    poly2 = addNode(poly2, 2, 3);
    poly2 = addNode(poly2, 6, 2);
    poly2 = addNode(poly2, 1, 1);
    poly2 = addNode(poly2, 6, 0);
    cout << "1st Polynomial:- ";
    displayList(poly1);
    cout << "2nd Polynomial:- ";
    displayList(poly2);
    poly3 = multiplyLL(poly1, poly2, poly3);
    cout << "Resultant Polynomial:- ";
    displayList(poly3);
    return 0;
}
