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

// Level Order Traversal , TC=O(n)
void levelOrder(Node* root){
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
}



//Find Minimum value
Node* minimumValue(Node* root){
    Node* temp = root;

    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}


Node* deletionInBST(Node* root, int x){
    // base case
    if(root == NULL) return root;
    if(root->data == x){


    // case 1)having 0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }

    // case 2) having 1 child
             // for left child
        if(root->left != NULL && root->right == NULL){
            Node* temp = root->left; // create new node and store the left value
            delete root;
            return temp;
        }
             // for right child
        if(root->right != NULL && root->left == NULL){
            Node* temp = root->right; // create new node and store the right value
            delete root;
            return temp;
        }

    // case 3) having 2 child
        if(root->left != NULL && root->right != NULL){
               // root ke right me jake find minimum value and replace with root
            int mini = minimumValue(root->right)->data;
            root->data = mini; // store mini value
            root->right = deletionInBST(root->right, mini);
            return root;
        }
    }
    else if(root->data > x){
        // left part me jaoo
        root->left = deletionInBST(root->left, x);
        return root;
    }
    else{
        // right part me jaoo
        root->right = deletionInBST(root->right, x);
        return root;
    }
    return root;
}


int main(){

    // Create the BST
    Node *root = new Node(50);
    root->left = new Node(20);
    root->right = new Node(70);
    root->left->left = new Node(10);
    root->left->right = new Node(30);
    root->right->right = new Node(90);
    root->right->right->right = new Node(110);
    root = creation_BST(root);


    levelOrder(root); // before deletion print tree

    root = deletionInBST(root, 20);
    levelOrder(root); // after deletion print tree

    
    return 0;
}