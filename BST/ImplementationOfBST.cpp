#include <iostream>

// Binary Search Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Global root variable
Node* root = nullptr;

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = new Node();
    if (!newNode) {
        std::cout << "Memory error\n";
        return nullptr;
    }
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

// Function to insert a node into the BST
void insert(int data) {
    Node* newNode = createNode(data);
    if (root == nullptr) {
        root = newNode;
        return;
    }
    Node* current = root;
    
    while (true) {
      
        if (data < current->data) {
            
            if (current->left== nullptr) {
                current->left= newNode;
                return;
            }
            else{
              current=current->left;
            }
        } else {
           
            if (current->right == nullptr) {
                current->right = newNode;
                return;
            }
            else{
              current=current->right;
            }
        }
    }
}

// Function to perform inorder traversal of the BST
void inorderTraversal(Node* node) {
    if (node == nullptr) {
        return;
    }
    inorderTraversal(node->left);
    std::cout << node->data << " ";
    inorderTraversal(node->right);
}

int main() {
    // Inserting nodes into the BST
    insert(50);
    insert(30);
    insert(20);
    insert(40);
    insert(70);
    insert(60);
    insert(80);

    // Displaying the BST
    std::cout << "Inorder traversal of the BST: ";
    inorderTraversal(root);

    return 0;
}
