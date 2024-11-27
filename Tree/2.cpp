#include <iostream>
#include <queue>
#include <iomanip>

using namespace std;

// Define a Node structure for the binary tree
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Function to print the tree
void printTree(Node* root, int space = 0, int COUNT = 10) {
    if (root == nullptr) {
        return;
    }

    // Increase distance between levels
    space += COUNT;

    // Print right child first
    printTree(root->right, space);

    // Print the current node after space
    cout << endl;
    for (int i = COUNT; i < space; i++) {
        cout << "  ";
    }
    cout << root->data << endl;

    // Print left child
    printTree(root->left, space);
}

// Function to create a new node
Node* createNode(int data) {
    return new Node(data);
}

int main() {
    // Create a binary tree
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    // Print the tree
    cout << "Binary Tree:" << endl;
    printTree(root);

    return 0;
}
