#include <iostream>
using namespace std;
class QNode
{
public:
    int data;
    QNode *next;
    QNode(int d)
    {
        data = d;
        next = NULL;
    }
};

class Queue
{
public:
    QNode *front, *rear;
    Queue()
    {
        front = rear = NULL;
    }
   
    void enQueue(int x)
    {
        QNode *temp = new QNode(x);
        if (rear == NULL)
        {
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }
    void deQueue()
    {
        if (front == NULL)
            return;
        QNode *temp = front;
        front = front->next;
        if (front == NULL)
            rear = NULL;
        delete (temp);
    }
    Queue(int n)
    {
        front = rear = NULL;

        while(n--){
            this->enQueue(0);
        }
    }
};
int main()
{
    int n; // no. of locations
    cout << "enter no. of locations : ";
    cin >> n;
    Queue q(n);

    cout << "Queue Front : " << (q.front)->data << endl;
    cout << "Queue Rear : " << (q.rear)->data;
}
