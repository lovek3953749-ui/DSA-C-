#include<iostream>
#include<queue>
using namespace std;

class Queue{

    int *arr;
    int frontIdx;
    int rearIdx;
    int size;

public:
    Queue(int size){
        size = 100001;
        arr = new int[size];
        frontIdx = 0;
        rearIdx = 0;
    }

    void push(int data){
        if(rearIdx == size){
            cout<<"Queue is Full"<<endl;  
        }else{
            arr[rearIdx] = data;
            rearIdx++;
        }
    }

    void pop(){
        if(frontIdx == rearIdx){
            return;
        }else{
            int ans = arr[frontIdx];
            arr[frontIdx] = -1;
            frontIdx++;
            if(frontIdx == rearIdx){
                frontIdx = 0;
                rearIdx = 0;
            }
            return;
        }
    }

    int front(){
        if(frontIdx == rearIdx){
            return -1;
        }else{
        return arr[frontIdx];
        }
    }

    bool isEmpty(){
        if(frontIdx == rearIdx){
            return true;
        }else{
            return false;
        }
    }

};

int main(){
    Queue q(5);

    q.push(1);
    q.push(2);
    q.push(3);  //front(pop) -> 1, 2, 3 <- rear(push)
    cout<<q.front()<<endl;

    q.pop();
    cout<<q.front()<<endl;

    cout<<q.isEmpty()<<endl;

    return 0;
}


 