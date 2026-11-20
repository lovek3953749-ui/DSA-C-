#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>q;

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