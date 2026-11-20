#include<iostream>
#include<queue>
using namespace std;

class CircularQueue{
    int* arr;
    int currSize, cap;
    int frontIdx, backIdx;

public:
    CircularQueue(int size){  // O(1)
        cap = size;
        arr = new int[cap];
        currSize = 0;
        frontIdx = 0;
        backIdx = -1;
    }

    void push(int data){       // O(1)
        if(currSize == cap){
            cout<<"circular Queue capacity is full"<<endl;
            return;
        }
        backIdx = (backIdx+1)%cap;
        arr[backIdx] = data;
        currSize++;
    }

    void pop(){           // O(1)
        if(empty()){
            cout<<"circular Queue is empty"<<endl;
            return;
        }
        frontIdx = (frontIdx+1)%cap;
        currSize--;
    }

    int front(){            // O(1)
        if(empty()){
            cout<<"circular Queue is empty"<<endl;
            return -1;
        }
        return arr[frontIdx];
    }

    bool empty(){            // O(1)
        return currSize == 0;
    }

    void printArr(){
        for(int i = 0; i<cap; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    CircularQueue cq(3);
    
    cq.push(1);
    cq.push(2);
    cq.push(3);

    cq.pop();

    cq.push(4);

    //cq.printArr();

    while(!cq.empty()){
        cout<<cq.front()<<" ";
        cq.pop();
    }
    cout<<endl;

    return 0;
}



























// #include <iostream>
// #include<queue>
// using namespace std;

// class CircularQueue{
// private:
//     int* arr;     
//     int capacity;      
//     int front;       
//     int rear;          
//     int currentSize;   

// public:
//     CircularQueue(int size){
//         capacity = size;
//         arr = new int[capacity];
//         front = 0;
//         rear = -1;
//         currentSize = 0;
//     }
//     ~CircularQueue(){
//         delete[] arr;
//     }

//     // Check if the queue is full
//     bool isFull() const{
//         return currentSize == capacity;
//     }

//     // Check if the queue is empty
//     bool isEmpty() const{
//         return currentSize == 0;
//     }

//     // 1. Insertion Operation
//     void enqueue(int value){
//         if(isFull()){
//             cout << "Queue Overflow! Cannot insert " << value << ".\n";
//             return;
//         }
//         rear = (rear + 1) % capacity;
//         arr[rear] = value;
//         currentSize++;
//         cout << "Inserted: " << value << "\n";
//     }

//     // 2. Deletion Operation (Dequeue)
//     int dequeue(){
//         if(isEmpty()){
//             cout << "Queue Underflow! Nothing to delete.\n";
//             return -1; 
//         }
//         int removedValue = arr[front];
//         front = (front + 1) % capacity;
//         currentSize--;
//         return removedValue;
//     }

//     //Queue Length
//     int length() const{
//         return currentSize;
//     }
//     void display() const{
//         if(isEmpty()){
//             cout << "Queue is empty.\n";
//             return;
//         }
//         cout << "Queue elements: ";
//         for (int i = 0; i < currentSize; i++) {
//             int index = (front + i) % capacity;
//             cout << arr[index] << " ";
//         }
//         cout << "\n";
//     }
// };

// int main() {
//     // Create a circular queue with a capacity of 5
//     CircularQueue cq(5);

//     // Testing Enqueue
//     cq.enqueue(10);
//     cq.enqueue(20);
//     cq.enqueue(30);
//     cq.enqueue(40);
//     cq.enqueue(50);
    
//     cq.display();
//     cout << "Current Queue Length: " << cq.length() << "\n\n";

//     cq.enqueue(60); 

//     cout << "Deleted element: " << cq.dequeue() << "\n";
//     cout << "Deleted element: " << cq.dequeue() << "\n";
    
//     cq.display();
//     cout << "Current Queue Length: " << cq.length() << "\n\n";

//     cout << "Inserting elements to show circular behavior:\n";
//     cq.enqueue(60);
//     cq.enqueue(70);
    
//     cq.display();
//     cout << "Final Queue Length: " << cq.length() << "\n";
//     return 0;
// }
