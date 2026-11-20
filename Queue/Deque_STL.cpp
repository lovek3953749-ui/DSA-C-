#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque<int>dq;

    dq.push_back(1);
    dq.push_back(2); // 1, 2

    dq.push_front(3);
    dq.push_front(4);  // 4, 3, 1, 2

    cout<<dq.front()<<endl; // 4
    cout<<dq.back()<<endl; // 2

    dq.pop_back();
    cout<<dq.back()<<endl; // 1

    dq.pop_front();
    cout<<dq.front()<<endl; // 3
}