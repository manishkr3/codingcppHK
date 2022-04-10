#include <iostream>
using namespace std;
class Queue
{
private:
    int front, rear, size, capacity;
    int *Queue_array;

public:
    Queue(int x)
    {
        capacity = x;
        size = 0;
        Queue_array = new int[capacity];
    }
    bool is_Full()
    {
        if (size == capacity)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool is_empty()
    {
        if (size == 0)
            return true;
        else
            return false;
    }
    void Insert_element_to_queue(int value)
    {
        if (is_Full())
        {
            cout << "Queue is full" << endl;
        }
        else
        {
            Queue_array[size] = value;
            size++;
        }
    }
    void Deletion()
    {
        if (is_empty())
        {
            cout << "Queue is Empty!" << endl;
        }
        else
        {
            cout << "Delelted Element of the Queue is: ";
            for (int i = 0; i < size - 1; i++)
                Queue_array[i] = Queue_array[i + 1];
            size--;
        }
        cout << endl;
    }
    void Display_Queue()
    {
        if (is_empty())
        {
            cout << "Queue is Empty!" << endl;
        }
        else
        {
            cout << "Queue Elemens: ";
            for (int i = 0; i < size - 1; i++)
                cout << Queue_array[i] << " ";
            cout << endl;
        }
    }
};
int main()
{
    int capacity_of_Queue;
    cout << "Enter the cpapacity of the Queue" << endl;
    cin >> capacity_of_Queue;
    Queue q(capacity_of_Queue);
    q.Deletion();
    cout << "Queuue is Created: " << endl;
    q.Insert_element_to_queue(1);
    q.Insert_element_to_queue(2);
    q.Insert_element_to_queue(3);
    q.Insert_element_to_queue(4);
    q.Insert_element_to_queue(5);
    q.Insert_element_to_queue(6);
    q.Insert_element_to_queue(7);
    q.Insert_element_to_queue(8);
    q.Display_Queue();
    q.Deletion();
    q.Display_Queue();
    return 0;
}
