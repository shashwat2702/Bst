#include <iostream>
#include <limits.h>

using namespace std;

struct BstNode {
  int data;
  BstNode* left;
  BstNode* right;
};

int FindMinIterative(BstNode* root) {
    if (root == NULL) {
        return INT_MAX;
    }

    while(root->left != NULL) {
        root = root->left;
    }

    return root->data;
}

int FindMaxIterative(BstNode* root) {
    if (root == NULL) {
        return INT_MIN;
    }
    while (root->right != NULL) {
        root = root->right;
    }
    return root->data;
}

int FindMinRecursive(BstNode* root) {
    if (root == NULL) {
        return INT_MAX;
    }

    if (root->left == NULL) {
        return root->data;
    }

    return FindMinRecursive(root->left);
}

int FindMaxRecursive(BstNode* root) {
    if (root == NULL) {
        return INT_MIN;
    }
    if (root->right == NULL) {
        return root->data;
    }
    return FindMaxRecursive(root->right);
}