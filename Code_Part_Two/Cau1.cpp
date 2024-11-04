#include <iostream>
using namespace std;

// Ð?nh ngh?a m?t nút trong cây nh? phân
struct Node {
    char data;
    Node* left;
    Node* right;

    Node(char value) {
        data = value;
        left = null;
        right = null;
    }
};

// Hàm chèn m?t ph?n t? vào cây
Node* insert(Node* root, char value) {
    if (root == null) {
        return new Node(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }

    return root;
}

// Hàm duy?t cây theo th? t? sau (post-order traversal)
void postOrderTraversal(Node* root) {
    if (root == null) {
        return;
    }

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

int main() {
    // T?o cây nh? phân t?m ki?m
    Node* root = null;
    char values[] = {'H', 'B', 'C', 'A', 'E', 'D', 'T', 'M', 'X', 'O'};
    int n = sizeof(values) / sizeof(values[0]);

    for (int i = 0; i < n; ++i) {
        root = insert(root, values[i]);
    }

    // Duy?t và in ra cây theo th? t? sau
    cout << "Duyet cay theo thu tu sau (post-order traversal): ";
    postOrderTraversal(root);
    cout << endl;

    return 0;
}

