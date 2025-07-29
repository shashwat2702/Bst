#include <iostream>

using namespace std;

struct BstNode
{
  char data;
  BstNode *left;
  BstNode *right;
};

// Pre-order traversal
// 1. Visit the root node
// 2. Visit left sub-tree
// 3. Visit right sub-tree

void PreorderTraversal(BstNode *root)
{
  if (root == NULL)
    return;
  cout << root->data << " ";

  PreorderTraversal(root->left);
  PreorderTraversal(root->right);
}

// In-order traversal
// 1. Visit the left sub-tree
// 2. Visit the root node.
// 3. Visit the right sub-tree

void InorderTraversal(BstNode *root)
{
  if (root == NULL)
    return;
  InorderTraversal(root->left);
  cout << root->data << " ";
  InorderTraversal(root->right);
}

// Post-order traversal
// 1. Visit the left sub-tree.
// 2. Visit the right sub-tree.
// 3. Visit the root node.

void PostorderTraversal(BstNode *root)
{
  if (root == NULL)
    return;
  PostorderTraversal(root->left);
  PostorderTraversal(root->right);
  cout << root->data << " ";
}