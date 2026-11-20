#include <iostream>
#include<queue>
using namespace std;

#define MAX_SIZE 100 

class LinearQueue {
private:
    int arr[MAX_SIZE];
    int front;
    int rear;

public:
    LinearQueue() {
        front = -1;
        rear = -1;
    }

    // Check if the queue is full
    bool isFull() {
        return rear == MAX_SIZE - 1;
    }

    // Check if the queue is empty
    bool isEmpty() {
        return front == -1 || front > rear;
    }

    // Insertion operation
    void insert(int value) {
        if (isFull()) {
            cout << "Queue Overflow! Cannot insert " << value << ".\n";
            return;
        }
        if (front == -1) {
            front = 0;
        }
        
        rear++;
        arr[rear] = value;
        cout << "Inserted " << value << " into the queue.\n";
    }

    // Deletion operation (Dequeue)
    void remove(){
        if (isEmpty()) {
            cout << "Queue Underflow! No elements to delete.\n";
            return;
        }
        
        cout << "Deleted element: " << arr[front] << "\n";
        front++; // Move the front pointer forward
    
        if (front > rear) {
            front = -1;
            rear = -1;
        }
    }

    // Queue Length(Size)
    int length() {
        if (isEmpty()) {
            return 0;
        }
        return (rear - front) + 1;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }
        
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};

int main() {
    LinearQueue q;

    //queue operations
    q.insert(10);
    q.insert(20);
    q.insert(30);
    q.display();
    cout << "Current Queue Length: " << q.length() << "\n\n";

    q.remove();
    q.display();
    cout << "Current Queue Length: " << q.length() << "\n\n";

    q.remove();
    q.remove();
    q.remove(); //deletion on an empty queue
    
    return 0;
}