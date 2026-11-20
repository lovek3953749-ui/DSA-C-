#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;

    node(int val){
        data = val;
        next = nullptr;
    }
};

// Print Linked List
void printLL(node* head){
    node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}

// Adding 
    // push_front
void push_front(int val){
    node* temp = new node(val);
    if(head == NULL){
        head = head->next = temp;
        return;
    }else{
        temp->next = head;
        head = temp;
    }
}

int main(){
    node* head = new node(30);
    head->next = new node(20);
    head->next->next = new node(70);
    head->next->next->next = new node(90);
    printLL(head);
    cout<<endl;

    push_front(80);
    printLL(head);
    cout<<endl;

    return 0;

}