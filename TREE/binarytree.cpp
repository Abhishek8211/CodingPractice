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



// // PREORDER TRAVERSAL, INORDER TRAVEVRSAL, POSTORDER TRAVERSAL OF BINARY TREE 
// #include<iostream>
// using namespace std;

// struct Node{
//     int data;
//     Node* left;
//     Node* right;
// };

// Node* createNode(int value){
//     Node* newNode =  new Node();
//     newNode->data = value;
//     newNode->left = nullptr;
//     newNode->right = nullptr;
//     return newNode;
// }

// void preorder(Node* root){ // root(print) -> left -> right
//     if(root == nullptr){
//         return;
//     }
//     cout << root->data << " ";
//     preorder(root->left);
//     preorder(root->right);
// }

// void inorder(Node* root){ // left -> root(print) -> right
//     if(root == nullptr){
//         return;
//     }
//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }

// void postorder(Node* root){ // left -> right -> root(print)
//     if(root == nullptr){
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout << root->data << " ";
// }

// int main(){
//     Node* root = createNode(1);
//     root->left = createNode(2);
//     root->right = createNode(3);
//     root->left->left = createNode(4);
//     root->left->right = createNode(5);
//     root->right->left = createNode(6);
//     root->right->right = createNode(7);
//     root->left->right->left = createNode(8);
//     root->right->right->left = createNode(9);
//     root->right->right->right = createNode(10);
//     cout << "Preorder Traversal: ";
//     preorder(root);
//     cout << endl;
//     cout << "Inorder Traversal: ";
//     inorder(root);
//     cout << endl;
//     cout << "Postorder Traversal: ";
//     postorder(root);
//     cout << endl;
//     return 0;
// }



// // QUESTIONS ON BINARY TREE
// // find the height of the binary tree
// #include <iostream>
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

// int height(Node* root){
//     if(root == nullptr){
//         return -1;
//     }
//     int leftheight = height(root->left);
//     int rightheight = height(root->right);
//     return max(leftheight, rightheight) + 1;
// }

// // find the number of nodes
// int counter(Node* root){
//     if(root == nullptr){
//         return 0;
//     }
   
//     return 1 + counter(root->right) + counter(root->left);
// }

// //count the number of leaf nodes
// int countLeafNodes(Node* root){
//     if(root == nullptr){
//         return 0;
//     }

//     if(root -> left == nullptr && root -> right == nullptr){
//         return 1;
//     }

//     return countLeafNodes(root -> left) + countLeafNodes(root -> right);
// }

// // PRINT ALL NODES AT K-TH LEVEL OF  BINARY TREE
// void printKthLevel(Node* root, int k){
//     if(root == nullptr){
//         return;
//     }

//     if(k == 0 ){
//         cout << root -> data <<" ";
//         return;
//     }

//     printKthLevel(root -> left, k-1);
//     printKthLevel(root -> right, k -1);
// }

// int sum = 0;

// // Sum of all nodes in binary tree
// int sumoftree(Node* root){
//     if(root == nullptr){
//         return sum = 0;
//     }

//     return sum = root -> data + sumoftree(root -> left) + sumoftree(root -> right);
    
// }

// // search for a value in binary tree
// bool search(Node* root, int value){
//     if(root == nullptr){
//         return false;
//     }
//     if(root -> data == value){
//         return true;
//     }
//     return search(root -> left, value) || search(root -> right, value);
// }

// int main(){
//     Node* root = createNode(1);
//     root->left = createNode(2);
//     root->right = createNode(3);
//     root->left->left = createNode(4);
//     root->left->right = createNode(5);

//     cout << "Height of the binary tree: " << height(root) << endl;
//     cout << "Number of nodes in the binary tree: " << counter(root) << endl;
//     cout << "Number of leaf nodes in the binary tree: " << countLeafNodes(root) << endl;
//     cout << "Nodes at 2nd level: ";
//     printKthLevel(root, 2);
//     cout << endl;
//     cout << "Sum of all nodes in the binary tree: " << sumoftree(root) << endl;
//     int valueToSearch = 5;
//     if(search(root, valueToSearch)){
//         cout << "Value " << valueToSearch << " found in the binary tree." << endl;
//     } else {
//         cout << "Value " << valueToSearch << " not found in the binary tree." << endl;
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;

// // Node structure
// struct Node {
//     int data;
//     Node* left;
//     Node* right;
// };

// // Create node
// Node* createNode(int val) {
//     Node* newNode = new Node();
//     newNode->data = val;
//     newNode->left = NULL;
//     newNode->right = NULL;
//     return newNode;
// }

// // Insert node
// Node* insertNode(Node* root, int val) {
//     if (root == NULL)
//         return createNode(val);

//     if (val < root->data)
//         root->left = insertNode(root->left, val);
//     else
//         root->right = insertNode(root->right, val);

//     return root;
// }

// // Search function
// bool searchNode(Node* root, int key) {
//     if (root == NULL) 
//         return false;

//     if (root->data == key) 
//         return true;

//     if (key < root->data)
//         return searchNode(root->left, key);
//     else
//         return searchNode(root->right, key);
// }

// // MAIN PROGRAM
// int main() {
//     Node* root = NULL;

//     // Build BST
//     root = insertNode(root, 7);
//     root = insertNode(root, 20);
//     root = insertNode(root, 5);
//     root = insertNode(root, 15);
//     root = insertNode(root, 10);
//     root = insertNode(root, 4);
//     root = insertNode(root, 33);
//     root = insertNode(root, 2);
//     root = insertNode(root, 25);
//     root = insertNode(root, 6);
//     root = insertNode(root, 22);

//     int key;
//     cout << "Enter key to search: ";
//     cin >> key;

//     if (searchNode(root, key))
//         cout << key << " found in BST.";
//     else
//         cout << key << " not found in BST.";

//     return 0;
// }


// // insert the data in bst and find floor and ceil value of a key
// #include<bits/stdc++.h>
// using namespace std;

// struct Node{
//     int data;
//     Node* left;
//     Node* right;
// };

// Node* createNode(int value){
//     Node* newNode =  new Node();
//     newNode->data = value;
//     newNode->left = nullptr;
//     newNode->right = nullptr;
//     return newNode;
// }

// Node* insertNode(Node* root, int val) {
//     if (root == NULL)
//         return createNode(val);

//     if (val < root->data)
//         root->left = insertNode(root->left, val);
//     else
//         root->right = insertNode(root->right, val);

//     return root;
// }

// int findfloor(Node* root, int key){
//     int floor = -1;
//     while(root){
//         if(root-> data == key) return root -> data;
//         if(root-> data > key) root = root -> left;
//         else{
//             floor = root -> data;
//             root = root -> right;
//         }
//     }
//     return floor;
// }

// int ceilvalue(Node* root, int key){
//     int ceil = -1;
//     while(root){
//         if(root-> data == key) return root -> data;
//         if(root-> data < key) root = root -> right;
//         else{
//             ceil = root -> data;
//             root = root -> left;
//         }
//     }
//     return ceil;
// }

// void display(Node* root){
//     if(root == nullptr){
//         return;
//     }
//     display(root -> left);
//     cout << root -> data << " ";
//     display(root -> right);
// }

// int main(){
//     Node* root = NULL;
//     root = insertNode(root, 50);
//     root = insertNode(root, 30);
//     root = insertNode(root, 70);
//     root = insertNode(root, 20);
//     root = insertNode(root, 40);
//     root = insertNode(root, 60);
//     root = insertNode(root, 80);

//     cout << "Inorder Traversal of the BST: ";
//     display(root);
//     cout << endl;

//     int key;
//     cout << "Enter key to find floor value: ";
//     cin >> key;
//     int floorValue = findfloor(root, key);
//     if(floorValue == -1){
//         cout << "No floor value found for " << key << endl;
//     } else {
//         cout << "Floor value of " << key << " is: " << floorValue << endl;
//     }

//     cout << "Enter key to find ceil value: ";
//     cin >> key;
//     int ceilValue = ceilvalue(root, key);
//     if(ceilValue == -1){
//         cout << "No ceil value found for " << key << endl;
//     } else {
//         cout << "Ceil value of " << key << " is: " << ceilValue << endl;
//     }
//     return 0;
// }


// //PRINT THE CODE IN LEVEL WISE TRAVERSAL OF BST
// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* left;
//     Node* right;
// };

// Node* createNode(int value) {
//     Node* newnode = new Node();
//     newnode->data = value;
//     newnode->left = nullptr;
//     newnode->right = nullptr;
//     return newnode;
// }

// // Function to find height of tree
// int height(Node* root) {
//     if (root == nullptr)
//         return 0;
//     return 1 + max(height(root->left), height(root->right));
// }

// // Print nodes at a given level
// void printLevel(Node* root, int level) {
//     if (root == nullptr)
//         return;

//     if (level == 1) {
//         cout << root->data << " ";
//     } else {
//         printLevel(root->left, level - 1);
//         printLevel(root->right, level - 1);
//     }
// }

// // Level Order traversal
// void printLevelOrder(Node* root) {
//     int h = height(root);
//     for (int i = 1; i <= h; i++) {
//         printLevel(root, i);
//     }
// }

// int main() {
//     Node* root = createNode(50);
//     root->left = createNode(30);
//     root->right = createNode(70);
//     root->left->left = createNode(20);
//     root->left->right = createNode(40);
//     root->right->left = createNode(60);
//     root->right->right = createNode(80);

//     // HEIGHT OF THE TREE
//     cout << "Height of the BST: " << height(root) - 1<< endl;

//     cout << "Level Order Traversal of BST: ";
//     printLevelOrder(root);

//     return 0;
// }



// PRINT THE NODES IN ZIG ZAG ORDER TRAVERSAL OF BST
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value){
    Node* newnode = new Node();
    newnode -> data= value;
    newnode -> left = nullptr;
    newnode -> right = nullptr;
    return newnode;
}

Node* insertNode(Node* root, int val){
    if(root == nullptr){
        return createNode(val);
    }

    if(val < root -> data){
        root -> left = insertNode(root -> left, val);
    } else {
        root -> right = insertNode(root -> right, val);
    }
    return root;
}

int height(Node* root){
    if(root == nullptr){
        return 0;
    }
    return 1 + max(height(root -> left), height(root -> right));
}

void PrintLeftToRight(Node* root, int level){
    if(root == nullptr){
        return;
    }

    if(level == 0){
        cout << root -> data << " ";
        return;
    } else if(level > 0){
        PrintLeftToRight(root -> left, level - 1);
        PrintLeftToRight(root -> right, level - 1);
    }
}

    void PrintRightToLeft(Node* root, int level){
        if(root == nullptr){
            return;
        }
        if(level == 0){
            cout << root -> data << " ";
            return;
        } else if(level > 0){
            PrintRightToLeft(root -> right, level - 1);
            PrintRightToLeft(root -> left, level - 1);
        }
    }

void PrintZigZag(Node* root){
    int h = height(root)-1;
    for(int i = 0; i <= h; i++){
        if(i % 2 == 0){
            PrintLeftToRight(root, i);
        } else {
            PrintRightToLeft(root, i);
        }
    }
}

int main(){
    Node* root = NULL;
    root = insertNode(root, 30);
    root = insertNode(root, 70);
    root = insertNode(root, 20);
    root = insertNode(root, 40);
    root = insertNode(root, 60);
    root = insertNode(root, 80);

    cout << "Zig Zag Traversal of the BST: ";
    PrintZigZag(root);
    return 0;
}

