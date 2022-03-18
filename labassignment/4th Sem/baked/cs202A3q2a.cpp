#include <iostream>
using namespace std;
class Node
{
public:
    int coeff, power;
    Node *next;
    Node(int coeff, int power)
    {
        this->coeff = coeff;
        this->power = power;
        this->next = NULL;
    }
};
void addPolynomials(Node *head1, Node *head2)
{
    if (head1 == NULL && head2 == NULL)
        return;
    else if (head1->power == head2->power)
    {
        cout << " " << head1->coeff + head2->coeff << "x^" << head1->power << " ";
        addPolynomials(head1->next, head2->next);
    }
    else if (head1->power > head2->power)
    {
        cout << " " << head1->coeff << "x^" << head1->power << " ";
        addPolynomials(head1->next, head2);
    }
    else
    {
        cout << " " << head2->coeff << "x^" << head2->power << " ";
        addPolynomials(head1, head2->next);
    }
}
void insert(Node *head1, int coeff, int power)
{
    Node *newNode = new Node(coeff, power);
    while (head1->next != NULL)
    {
        head1 = head1->next;
    }
    head1->next = newNode;
}
void printList(Node *head1)
{
    cout << "Linked List" << endl;
    while (head1 != NULL)
    {
        cout << " " << head1->coeff << "x"
             << "^" << head1->power;
        head1 = head1->next;
    }
}
int main()
{
    Node *head1 = new Node(8, 2);
    insert(head1, 3, 1);
    Node *head2 = new Node(1, 2);
    insert(head2, 2, 1);
    printList(head1);
    cout << endl;
    printList(head2);
    cout << endl
         << "Addition:" << endl;
    addPolynomials(head1, head2);
    return 0;
}

