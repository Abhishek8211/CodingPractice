// #include<iostream>
// using namespace std;

// struct Node{
//     int data;
//     Node* left;
//     Node* right;
// };

// Node* createNode(int value){
//     Node* newNode = new Node();
//     newNode->data = value;
//     newNode->left = nullptr;
//     newNode->right = nullptr;
//     return newNode;
// }

// int main(){
//     Node* root = createNode(10);
//     root->left = createNode(5);
//     root->right = createNode(15);

//     cout << "Root Node: " << root->data << endl;
//     cout << "Left Child: " << root->left->data << endl;
//     cout << "Right Child: " << root->right->data << endl;

//     return 0;
// }



// PREORDER TRAVERSAL, INORDER TRAVEVRSAL, POSTORDER TRAVERSAL OF BINARY TREE 
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value){
    Node* newNode =  new Node();
    newNode->data = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

void preorder(Node* root){ // root(print) -> left -> right
    if(root == nullptr){
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root){ // left -> root(print) -> right
    if(root == nullptr){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(Node* root){ // left -> right -> root(print)
    if(root == nullptr){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main(){
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);
    root->left->right->left = createNode(8);
    root->right->right->left = createNode(9);
    root->right->right->right = createNode(10);
    cout << "Preorder Traversal: ";
    preorder(root);
    cout << endl;
    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;
    cout << "Postorder Traversal: ";
    postorder(root);
    cout << endl;
    return 0;
}

