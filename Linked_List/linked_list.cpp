#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val){
        data = val; 
        next = nullptr;
    }
};
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "nullptr" <<endl;
}

int main() {
    Node* head = new Node(2);
    head->next = new Node(8);
    head->next->next = new Node(14);
    head->next->next->next = new Node(6);
    head->next->next->next->next = new Node(4);

    cout << "Singly Linked List: ";
    printList(head);
    
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }

    return 0;
}
