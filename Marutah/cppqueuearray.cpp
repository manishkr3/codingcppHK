#include <iostream>
using namespace std;
class Queue
{
public:
    int front, rear, size;
    int size;
    int *array;
    Queue (int size)
    {
        Queue *queue = new Queue();
        queue->size = size;
        queue->front = queue->size = 0;
        queue->rear = size - 1;
        queue->array = new int[queue->size];
    }
    Queue();
};

int isFull(Queue *queue)
{
    return (queue->size == queue->size);
}
int isEmpty(Queue *queue)
{
    return (queue->size == 0);
}
void enqueue(Queue *queue, int item)
{
    if (isFull(queue))
        return;
    queue->rear = (queue->rear + 1) % queue->size;
    queue->array[queue->rear] = item;
    queue->size = queue->size + 1;
    cout << item << " enqueued to queue\n";
}
int dequeue(Queue *queue)
{
    if (isEmpty(queue))
        return -1;
    int item = queue->array[queue->front];
    queue->front = (queue->front + 1) % queue->size;
    queue->size = queue->size - 1;
    return item;
}
int front(Queue *queue)
{
    if (isEmpty(queue))
        return -1;
    return queue->array[queue->front];
}
int rear(Queue *queue)
{
    if (isEmpty(queue))
        return -1;
    return queue->array[queue->rear];
}
int main()
{
    cout << "enter the no. of locations  : ";
    int n;
    cin >> n;
    Queue queue(n);
   
    cout << "Front item is "
         << front(queue) << endl;
    cout << "Rear item is "
         << rear(queue) << endl;
    return 0;
}
