#include <iostream>
using namespace std;

template <typename T>
class BinaryNode {
public:
    T data;
    BinaryNode<T>* left;
    BinaryNode<T>* right;
    BinaryNode(T data) : data(data), left(nullptr), right(nullptr) {}
};

template <typename T>
class BST {
private:
    BinaryNode<T>* root;
    int size;
    void addHelper(BinaryNode<T>* curr, T val);
    void deleteHelper(BinaryNode<T>* curr);
    void postorderHelper(BinaryNode<T>* curr);
    void preorderHelper(BinaryNode<T>* curr);
    void inorderHelper(BinaryNode<T>* curr);

public:
    BST() : root(nullptr), size(0) {}
    void addNode(T val);
    void deleteTree();
    void postorder();
    void preorder();
    void inorder();
};

// --- addHelper: BST insertion — left if smaller, right if greater ---
template <typename T>
void BST<T>::addHelper(BinaryNode<T>* curr, T val) {
    if (val < curr->data) {
        if (curr->left == nullptr) {
            curr->left = new BinaryNode<T>(val);
        } else {
            addHelper(curr->left, val);
        }
    } else {
        if (curr->right == nullptr) {
            curr->right = new BinaryNode<T>(val);
        } else {
            addHelper(curr->right, val);
        }
    }
}

template <typename T>
void BST<T>::addNode(T val) {
    if (root == nullptr) {
        root = new BinaryNode<T>(val);
    } else {
        addHelper(root, val);
    }
    size++;
}

// --- deleteHelper: postorder deletion to free all nodes ---
template <typename T>
void BST<T>::deleteHelper(BinaryNode<T>* curr) {
    if (curr == nullptr) return;
    deleteHelper(curr->left);
    deleteHelper(curr->right);
    delete curr;
}

template <typename T>
void BST<T>::deleteTree() {
    deleteHelper(root);
    root = nullptr;
    size = 0;
}

// --- Traversals ---
template <typename T>
void BST<T>::postorderHelper(BinaryNode<T>* curr) {
    if (curr == nullptr) return;
    postorderHelper(curr->left);
    postorderHelper(curr->right);
    cout << curr->data << " ";
}

template <typename T>
void BST<T>::postorder() {
    postorderHelper(root);
    cout << endl;
}

template <typename T>
void BST<T>::preorderHelper(BinaryNode<T>* curr) {
    if (curr == nullptr) return;
    cout << curr->data << " ";
    preorderHelper(curr->left);
    preorderHelper(curr->right);
}

template <typename T>
void BST<T>::preorder() {
    preorderHelper(root);
    cout << endl;
}

template <typename T>
void BST<T>::inorderHelper(BinaryNode<T>* curr) {
    if (curr == nullptr) return;
    inorderHelper(curr->left);
    cout << curr->data << " ";
    inorderHelper(curr->right);
}

template <typename T>
void BST<T>::inorder() {
    inorderHelper(root);
    cout << endl;
}

int main() {
    BST<int> tree;
    tree.addNode(5);
    tree.addNode(2);
    tree.addNode(8);
    tree.addNode(1);
    tree.addNode(3);
    tree.addNode(6);
    tree.addNode(10);

    cout << "Preorder: ";
    tree.preorder();

    cout << "Inorder: ";
    tree.inorder();

    cout << "Postorder: ";
    tree.postorder();

    tree.deleteTree();
    return 0;
}
