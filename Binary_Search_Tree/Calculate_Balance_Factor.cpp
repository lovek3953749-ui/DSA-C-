#include <iostream>
#include <algorithm>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    int height;

    Node(int val) {
        data = val;
        left = right = nullptr;
        height = 1; // New node starts as a leaf with height 1
    }
};

// Get height of a node
int getHeight(Node* n) {
    if (n == nullptr) return 0;
    return n->height;
}

// Calculate Balance Factor
int getBalanceFactor(Node* n) {
    if (n == nullptr) return 0;
    return getHeight(n->left) - getHeight(n->right);
}

// Right Rotation (for LL case)
Node* rightRotate(Node* y) {
    Node* x = y->left;
    Node* T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    // Update heights
    y->height = 1 + max(getHeight(y->left), getHeight(y->right));
    x->height = 1 + max(getHeight(x->left), getHeight(x->right));

    return x; // New root
}

// Left Rotation (for RR case)
Node* leftRotate(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    // Update heights
    x->height = 1 + max(getHeight(x->left), getHeight(x->right));
    y->height = 1 + max(getHeight(y->left), getHeight(y->right));

    return y; // New root
}

// Insert a node into the AVL Tree
Node* insert(Node* node, int key) {
    // 1. Standard BST insertion
    if (node == nullptr) return new Node(key);

    if (key < node->data)
        node->left = insert(node->left, key);
    else if (key > node->data)
        node->right = insert(node->right, key);
    else
        return node; // Duplicate keys not allowed

    // 2. Update height of current ancestor node
    node->height = 1 + max(getHeight(node->left), getHeight(node->right));

    // 3. Get Balance Factor to check if unbalanced
    int bf = getBalanceFactor(node);

    // 4. Handle the 4 imbalance cases
    // LL Case
    if (bf > 1 && key < node->left->data)
        return rightRotate(node);

    // RR Case
    if (bf < -1 && key > node->right->data)
        return leftRotate(node);

    // LR Case
    if (bf > 1 && key > node->left->data) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    // RL Case
    if (bf < -1 && key < node->right->data) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    return node;
}

// Inorder traversal (prints sorted order)
void inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << " (BF: " << getBalanceFactor(root) << ")  ";
        inorder(root->right);
    }
}

int main() {
    Node* root = nullptr;

    // Inserting 30, 20, 10 triggers an LL Right Rotation
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 10);
    root = insert(root, 25);
    root = insert(root, 40);

    cout << "Inorder traversal with Balance Factors:\n";
    inorder(root);
    cout << endl;

    return 0;
}
