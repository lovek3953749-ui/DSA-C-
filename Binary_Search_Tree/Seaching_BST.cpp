#include<iostream>
#include<queue>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// creation of BST
Node *creation_BST(Node *root){
    return root;
}

// Minimum value
Node* minimumValue(Node* root){
    Node* temp = root;

    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}

// Maximum value
Node* maximumValue(Node* root){
    Node* temp = root;

    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}


// searching A Number in BST
bool searchInBST(Node* root, int x){
    // base case
    if(root == NULL) return false;
    if(root->data == x) return true;

    // recursion call
    if(root->data > x){
        // left part check
        return searchInBST(root->left, x);
    }else{
        // right part check
        return searchInBST(root->right, x);
    }
}

int main(){

    // Create the BST
    Node *root = new Node(2);
    root->left = new Node(1);
    root->right = new Node(3);
    root->right->right = new Node(6);
    root = creation_BST(root);



    // Print level order BST
    queue<Node *> q;
    q.push(root);

    cout << "[";
    bool first = true;
    while (!q.empty()){
        Node *curr = q.front();
        q.pop();

        if (!first)
            cout << ", ";
        first = false;

        if (curr){
            cout << curr->data;
            q.push(curr->left);
            q.push(curr->right);
        }
        else{
            cout << "N";
        }
    }
    cout << "]"<<endl;


    cout<<"Minimun value = "<<minimumValue(root)->data<<endl;
    cout<<"Maximum value = "<<maximumValue(root)->data<<endl;

    cout<<searchInBST(root, 3)<<endl;
    return 0;
}