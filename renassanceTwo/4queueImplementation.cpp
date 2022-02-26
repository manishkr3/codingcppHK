#include <vector>
#include <iostream>
using namespace std;
class Queue
{
    int size;
    vector<int> v;
    int front;
    int rear;

public:
    Queue(int x)
    {
        size = x;
        front = -1;
        rear = -1;
    }
    void push(int ele)
    {
        if (rear != size - 1)
        {
            v.push_back(ele);
            rear++;
        }
        else
        {
            cout << "\n queue is full : ";
        }
    }
    void pop()
    {
        if (rear != -1 && front != rear)
        {
            front++; //or v.erase()also can work
        }
        else
        {
            cout << "\n queue is empty : ";
        }
    }
    int fronelementtofqueue()
    {
        return v[front + 1];
    }
    void show()
    {
        for (int i = front + 1; i < size; i++)
        {
            cout << " " << v[i];
        }
    }
};
int main()
{
    Queue q(5);
    q.push(40);
    q.push(61);
    q.push(63);
    q.push(42);
    q.push(48);
    q.push(4);
    q.pop();
    q.pop();
    cout << "\n front is " << q.fronelementtofqueue();
    cout << "\n";
    q.show();

    return 0;
}