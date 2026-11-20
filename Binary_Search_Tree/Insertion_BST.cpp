// #include<iostream>
// #include<queue>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val){
//         data = val;
//         left = nullptr;
//         right = nullptr;
//     }
// };

// // Preoder Traversal, TC=O(n)
// void preOrder(Node *root){
//     // base case
//     if(root == NULL){
//         return;
//     }
//     cout<<root->data << " "; // print root
//     preOrder(root->left);      // then call left child(if present then again,  root - left - right)
//     preOrder(root->right);     //  then call right child(if present then again,  root - left - right)
// }


// // Inorder Traversal, TC=O(n)
// void inOrder(Node* root){
//     // base case
//     if(root == NULL){
//         return;
//     }
//     inOrder(root->left);      // then call left child(if present then again,  root - left - right)
//     cout<<root->data << " "; // print root
//     inOrder(root->right);     //  then call right child(if present then again,  root - left - right)
// }


// // Post Traversal, TC=O(n)
// void postOrder(Node* root){
//     // base case
//     if(root == NULL){
//         return;
//     }
//     postOrder(root->left);      // then call left child(if present then again,  root - left - right)
//     postOrder(root->right);     //  then call right child(if present then again,  root - left - right)
//     cout<<root->data << " ";   // print root
// }


// // Level Order Traversal , TC=O(n)
// void levelOrderTraversal(Node* root){
//     queue<Node*> q;

//     q.push(root);
//     while(q.size()>0){
//         Node* curr = q.front();
//         q.pop();

//         cout<<curr->data<<" ";

//         if(curr->left != NULL){
//             q.push(curr->left);
//         }
//         if(curr->right != NULL){
//             q.push(curr->right);
//         }
//     }
//     cout<<endl;
// }

// Node* insertIntoBST(Node* root, int val){
//     // base case 
//     if(root == NULL){          // agar root null ho toh eq new node bana lo aur root ko return kar do
//         root = new Node(val);
//         return root;
//     }

//     if(val > root->data){
//         // Insert at right part
//         root->right = insertIntoBST(root->right, val);
//     }else{
//         // insert at left part
//         root->left = insertIntoBST(root->left, val);
//     }
//     return root;
// }

// void takeInput(Node* &root){
//     int data;  // take data
//     cin>>data;

//     while(data != -1){     // aur tabb tak input lo jabb tak -1 na aa jaye
//         root = insertIntoBST(root, data);  // aur data ko BST me dall do
//         cin>>data;
//     }
// }

// int main(){

//     Node* root = NULL;

//     cout<<"Enter data to create BST : ";
//     takeInput(root);

//     cout<<"Printing the BST"<<endl;
//     levelOrderTraversal(root);

//     cout<<"Printing Inorder"<<endl;
//     inOrder(root);

//     cout<<endl<<"Printing Preorder"<<endl;
//     preOrder(root);

//     cout<<endl<<"Printing Postorder"<<endl;
//     postOrder(root);


//     return 0;
// }



// Insertion of a number in BST
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

Node *insert(Node *root, int key){
    // Insert the new node at an empty position
    if(root == nullptr)
        return new Node(key);

    // If key is already present, do not insert it again
    if(key == root->data)
        return root;

    // Insert into the left subtree
    if(key < root->data)
        root->left = insert(root->left, key);

    // Insert into the right subtree
    else
        root->right = insert(root->right, key);

    return root;
}


int main(){

    // Create the BST
    Node *root = new Node(2);
    root->left = new Node(1);
    root->right = new Node(3);
    root->right->right = new Node(6);

    int key = 4;

    root = insert(root, key);

    // Print level order
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
        }else{
            cout << "N";
        }
    }
    cout << "]"<<endl;

    return 0;
}