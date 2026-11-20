#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
}; 

class Queue{
    Node* head;
    Node* tail;

public:
    Queue(){
        head = tail = NULL;
    }

    void push(int data){ // insert data at tail LL ( TC=O(1) )
        Node* newNode = new Node(data);
        if(empty()){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop(){        // delete data at head of LL ( TC = O(1) )
        if(empty()){
            cout<<"LL is empty"<<endl;
            return;
        }else{
            Node* temp = head;
            head = head->next;
            delete head;
        }

    }

    int front(){        // TC = O(1)
        if(empty()){
            cout<<"LL is empty"<<endl;
            return -1;
        }
        return head->data;
    }


    int empty(){  // TC = O(1)
        return head == NULL;
    }
};

int main(){
    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);     // Output = 1, 2, 3

    while(!q.empty()){
        cout<<q.front()<<" ";   // 1->pop, 2->pop, 3->pop. so output = 1, 2, 3
        q.pop();
    }
    cout<<endl;

    return 0;
}