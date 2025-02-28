
/* Structure of a node in Queue
struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};

And structure of MyQueue
struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
}; */

// Function to push an element into the queue.
void MyQueue::push(int x) {
    QueueNode* newNode = new QueueNode(x);
    
    // If queue is empty, set both front and rear to new node
    if (rear == NULL) {
        front = rear = newNode;
        return;
    }

    // Add the new node at the end of the queue and update rear
    rear->next = newNode;
    rear = newNode;
}

// Function to pop front element from the queue.
int MyQueue::pop() {
    if (front == NULL) return -1; // Queue is empty

    // Store front node data and move front pointer to the next node
    int data = front->data;
    QueueNode* tmp = front;
    front = front->next;

    // If front becomes NULL, set rear to NULL as well
    if (front == NULL) rear = NULL;

    delete tmp; // Free memory of old front
    return data;
}

