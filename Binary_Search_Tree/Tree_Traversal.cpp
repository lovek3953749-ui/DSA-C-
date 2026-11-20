#include <iostream>
#include <vector>
#include<queue>
using namespace std;

class Node{
public:
    int data;
    // pointers to store the address of left and right child
    Node *left;
    Node *right;

    Node(int val){
        data = val;
        // at starting both child points to null value
        left = nullptr;
        right = nullptr;
    }
};



// Traversing of preorder, TC = O(n)
static int idx = -1;
Node* buildTree(vector<int> values){
    idx++;

    if(values[idx] == -1){  // base case
        return nullptr;
    }

    Node* root = new Node(values[idx]);
    root->left = buildTree(values);  // left subtree
    root->right = buildTree(values);  // right subtree
    return root;
}


// Preoder Traversal, TC=O(n)
void preOrder(Node *root){
    // base case
    if(root == NULL){
        return;
    }
    cout<<root->data << " "; // print root
    preOrder(root->left);      // then call left child(if present then again,  root - left - right)
    preOrder(root->right);     //  then call right child(if present then again,  root - left - right)
}


// Inorder Traversal, TC=O(n)
void inOrder(Node* root){
    // base case
    if(root == NULL){
        return;
    }
    inOrder(root->left);      // then call left child(if present then again,  root - left - right)
    cout<<root->data << " "; // print root
    inOrder(root->right);     //  then call right child(if present then again,  root - left - right)
}


// Post Traversal, TC=O(n)
void postOrder(Node* root){
    // base case
    if(root == NULL){
        return;
    }
    postOrder(root->left);      // then call left child(if present then again,  root - left - right)
    postOrder(root->right);     //  then call right child(if present then again,  root - left - right)
    cout<<root->data << " ";   // print root
}




// Level Order Traversal , TC=O(n)
void levelOrder(Node* root){
    queue<Node*> q;

    q.push(root);
    while(q.size()>0){
        Node* curr = q.front();
        q.pop();

        cout<<curr->data<<" ";

        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
    cout<<endl;
}



int main(){
    vector<int> values = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};   // -1 is NULL value      
    Node* root = buildTree(values);

    preOrder(root);
    cout << endl;

    inOrder(root);
    cout << endl;

    postOrder(root);
    cout<<endl;
    
    levelOrder(root);

    return 0;
}



// // Traversal
// #include<iostream>
// #include<vector>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val){
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };

// // Preoder Traversal
// void preOrder(Node* root){

//     // base case
//     if(root == NULL){
//         return;
//     }

//     cout<<root->data<<" ";
//     preOrder(root->left);
//     preOrder(root->right);
// }

// // Inorder Traversal
// void inOrder(Node* root){

//     // base case
//     if(root == NULL){
//         return;
//     }

//     inOrder(root->left);
//     cout<<root->data<<" ";
//     inOrder(root->right);
// }


// // Post Traversal, TC=O(n)
// void postOrder(Node* root){
//     // base case
//     if(root == NULL){
//         return;
//     }
//     postOrder(root->left);       
//     postOrder(root->right);      
//     cout<<root->data << " ";   
// }



// int main(){

//     // Build a tree
//     Node* root = new Node(100);
//     root->left = new Node(20);
//     root->right = new Node(200);
//     root->left->left = new Node(10);
//     root->left->right = new Node(30);
//     root->right->left = new Node(150);
//     root->right->right = new Node(300);

//     cout << "Preorder Traversal: ";
//     preOrder(root);  // function call
//     cout<<endl;


//     cout << "Inorder Traversal: ";
//     inOrder(root);  // function call
//     cout<<endl;

//     cout << "Post Traversal: ";
//     postOrder(root);  // function call
//     cout<<endl;
//     return 0;
// }