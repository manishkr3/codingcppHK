#include <iostream>
using namespace std;
struct Queue
{
    int data;
    struct node *next;
};
struct Queue *front = NULL;
struct Queue *rear = NULL;
struct Queue *temp;
void Insert()
{
    int value;
    cout << "Enter the element in queue : " << endl;
    cin >> value;
    if (rear == NULL)
    {
        rear = (struct Queue *)malloc(sizeof(struct Queue));
        rear->next = NULL;
        rear->data = value;
        front = rear;
    }
    else
    {
        temp = (struct Queue *)malloc(sizeof(struct Queue));
        rear->next = temp;
        temp->data = value;
        temp->next = NULL;
        rear = temp;
    }
}
void Delete()
{
    temp = front;
    if (front == NULL)
    {
        cout << "!!Queue is empty!!" << endl;
        return;
    }
    else if (temp->next != NULL)
    {
        temp = temp->next;
        cout << "Element deleted from queue is : " << front->data << endl;
        free(front);
        front = temp;
    }
    else
    {
        cout << "Element deleted from queue is : " << front->data << endl;
        free(front);
        front = NULL;
        rear = NULL;
    }
}
void Display()
{
    temp = front;
    if ((front == NULL) && (rear == NULL))
    {
        cout << "!!Queue is empty!!" << endl;
        return;
    }
    cout << "Queue elements are: ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    int ch;
    cout << "1) Insert element to queue" << endl;
    cout << "2) Delete element from queue" << endl;
    cout << "3) Display all the elements of queue" << endl;
    cout << "4) Exit" << endl;
    do
    {
        cout << "Enter your choice : " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            Insert();
            break;
        case 2:
            Delete();
            break;
        case 3:
            Display();
            break;
        case 4:
            cout << "Exit" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    } while (ch != 4);
    return 0;
}
