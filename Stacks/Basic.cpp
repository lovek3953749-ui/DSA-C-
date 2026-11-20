#include<iostream>
#include<stack>    // stack header file
using namespace std;

int main(){

    // creation of stack
    stack<int> nums;
   
    // Insertation of elements
    nums.push(6);
    nums.push(7);
    nums.push(3);
    nums.push(9);
    nums.push(7);
 
    // get top elements
    cout<<nums.top();
    cout<<endl;
 
    // change top elements
    nums.top() = 8;
    cout<<nums.top();
    cout<<endl;

    // remove top elements
    nums.pop();
    cout<<nums.top();
    cout<<endl;

    // get size of stack
    cout<<nums.size();
    cout<<endl;

    // check stack is empty or not
    cout<<nums.empty();
    cout<<endl;

    return 0;
}
