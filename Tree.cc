#include "Tree.h"
#include <iostream>

using namespace std;

void PreOrderTraversal(const TreeNode *root) {
    if (root != nullptr) {
        cout << root->value << " ";
        PreOrderTraversal(root->left);
        PreOrderTraversal(root->right);
    }
}

void InOrderTraversal(const TreeNode *root) {
    if (root != nullptr) {
        PreOrderTraversal(root->left);
        cout << root->value << " ";
        PreOrderTraversal(root->right);
    }
}

void PostOrderTraversal(const TreeNode *root) {
    if (root != nullptr) {
        PreOrderTraversal(root->left);
        PreOrderTraversal(root->right);
        cout << root->value << " ";
    }
}

void PrintTree(const TreeNode *root, int traType) {
    switch(traType) {
        case 0:
            PreOrderTraversal(root);
            break;
        case 1:
            InOrderTraversal(root);
            break;
        case 2:
            PostOrderTraversal(root);
            break;
        default:
            PreOrderTraversal(root);
    }
    cout << endl;
}

