#include <iostream>
using namespace std;
class Queue
{
public:
    int front, rear, size;
    int *queueu;
    Queue(int n)
    {
        front = rear = 0;
        size = n;
       int* queueu= new int;
        // int *queueu= (int *)malloc(sizeof(int));
        cout << " size is : " << sizeof(*queueu) << endl;
        cout << "size of array is : " << sizeof(*queueu) / sizeof(queueu[0]) << endl;
        queueu[444] = 44;
        cout << "location : " << queueu[444] << endl;
    }

    void queueEnqueue(int data)
    {
        if (size == rear)
        {
            cout << "Queue is full\n";
            return;
        }
        else
        {
            queueu[rear] = data;
            rear++;
        }
        return;
    }
    void queueDequeue()
    {
        if (front == rear)
        {
            cout << "Queue is empty \n";
            return;
        }
        else
        {
            for (int i = 0; i < rear - 1; i++)
            {
                queueu[i] = queueu[i + 1];
            }
            rear--;
        }
        return;
    }
    void queueDisplay()
    {
        int i;
        if (front == rear)
        {
            cout << "Queue is empty\n";
            return;
        }

        // traverse front to rear and print elements
        for (i = front; i < rear; i++)
        {
            cout << queueu[i] << "<-";
        }
        cout << endl;
        return;
    }
    void queueFront()
    {

        cout << "front element is : " << queueu[front] << endl;
        return;
    }
    void queueRear()
    {

        cout << "rear element is : " << queueu[rear] << endl;
        return;
    }
};
int main()
{
    int n;
    cout << "enter no. of locations : ";
    cin >> n;

    Queue q(n);
    q.queueFront();
    q.queueRear();

    q.queueDisplay();
    q.queueEnqueue(20);
    q.queueEnqueue(30);
    q.queueEnqueue(40);
    q.queueEnqueue(50);
    q.queueEnqueue(20);
    q.queueEnqueue(30);
    q.queueEnqueue(40);
    q.queueEnqueue(50);
    q.queueEnqueue(20);
    q.queueEnqueue(30);
    q.queueEnqueue(40);
    q.queueEnqueue(50);
    q.queueEnqueue(20);
    q.queueEnqueue(30);
    q.queueEnqueue(40);
    q.queueEnqueue(50);
    q.queueDisplay();
    cout << " size is : " << sizeof(q.queueu) << endl;
    cout << "size of array is : " << sizeof(q.queueu) / sizeof(q.queueu[0]) << endl;
    return 0;
}
