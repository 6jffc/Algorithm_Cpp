#include <iostream>
using namespace std;

// �?nh ngh?a m?t n�t trong c�y nh? ph�n
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

// H�m ch�n m?t ph?n t? v�o c�y
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

// H�m duy?t c�y theo th? t? sau (post-order traversal)
void postOrderTraversal(Node* root) {
    if (root == null) {
        return;
    }

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

int main() {
    // T?o c�y nh? ph�n t?m ki?m
    Node* root = null;
    char values[] = {'H', 'B', 'C', 'A', 'E', 'D', 'T', 'M', 'X', 'O'};
    int n = sizeof(values) / sizeof(values[0]);

    for (int i = 0; i < n; ++i) {
        root = insert(root, values[i]);
    }

    // Duy?t v� in ra c�y theo th? t? sau
    cout << "Duyet cay theo thu tu sau (post-order traversal): ";
    postOrderTraversal(root);
    cout << endl;

    return 0;
}

