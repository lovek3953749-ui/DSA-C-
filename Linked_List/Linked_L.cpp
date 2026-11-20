// Implementation of Linked List
#include<iostream>
using namespace std;


      // Node Class
class Node{
public: 
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};


        // List Class
class List{
    Node* head;
    Node* tail;

public:
    List(){
        head = tail = nullptr;
    }



        // Push_Front (add from starting).     time = O(1)
    void push_front(int val){
        Node* newNode = new Node(val);  
        if(head == NULL){
            head = tail = newNode;
            return;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }




        // Push_Back (add from ending).        time = O(1)
    void push_back(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }



    // Insert at particular position in middle of the Linked List.    time = O(n)
    void insert(int val, int pos){
        if(pos < 0){
            cout<<"Invalid position"<<endl;
            return;
        }
        if(pos == 0){
            push_front(val);
            return;
        }
        Node* temp = head;
        for(int i = 0; i<pos-1; i++){
            if(temp == NULL){
                cout<<"Invalid Position"<<endl;
                return;
            }
            temp = temp->next;
        }
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;

    }




           // POP_Front (delete from starting).     time = O(1)
    void pop_front(){
        if(head == NULL){
            cout<<"Linked List is Empty"<<endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;

        delete temp;
    }




           // POP_Back (delete from ending).     time = O(n)
    void pop_back(){
        if(head == NULL){
            cout<<"Linked List is Empty"<<endl;
            return;
        }
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }




        // function to Print the Linked List        time = O(n)
    void printLL(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp =  temp->next;
        }
        cout<<"NULL"<<endl;
    }



        // Search in Linked List.     time = O(n)
    int search(int key){
        Node* temp = head;
        int idx = 0;

        while(temp != NULL){
            if(temp->data == key){
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }



};


int main(){

    List ll;

    cout<<"Linked List when push_front : ";
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.printLL();


    cout<<"Linked List when push_back : ";
    ll.push_back(4);
    ll.push_back(5);
    ll.printLL();



    cout<<"Linked List when insert_random position : ";
    ll.insert(4,1);
    ll.insert(5,0);
    ll.printLL();


    cout<<"Linked List when pop_front : ";
    ll.pop_front();
    ll.pop_front();
    ll.printLL();



    cout<<"Linked List when pop_back : ";
    ll.pop_back();
    ll.pop_back();
    ll.printLL();


    cout<<"Search given element in Linked List :"<<endl;
    cout<<ll.search(2)<<endl;
    cout<<ll.search(7)<<endl;


    return 0;
}




