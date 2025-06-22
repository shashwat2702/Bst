#include <algorithm>

using namespace std;

struct BstNode {
  int data;
  BstNode* left;
  BstNode* right;
};

int FindHeightOfTree(BstNode* root) {
    if (root == NULL) {
        return 0;
    }
    if (root->left == NULL && root->right == NULL) {
        return 0;
    }

    int heightOfLeftSubTree = FindHeightOfTree(root->left);
    int heightOfRightSubTree = FindHeightOfTree(root->right);

    return max(heightOfLeftSubTree, heightOfRightSubTree) + 1;
}