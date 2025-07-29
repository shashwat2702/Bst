#include <iostream>
#include <queue>

using namespace std;

struct BstNode {
    char data;
    BstNode* left;
    BstNode* right;
};

// Level order traversal or breadth first search
// Time complexity = O(n)
// Space complexity : O(1) best case
//                    O(n) worst/avg case

void LevelOrder(BstNode* root) {
    if (root == NULL) return;
    queue<BstNode*> Q;
    Q.push(root);
    // While there is atleast one discovered node
    while(!Q.empty()) {
        BstNode* current = Q.front();
        cout << current->data << " ";
        if (current->left != NULL) {
            Q.push(current->left);
        }
        if(current->right != NULL) {
            Q.push(current->right);
        }
        Q.pop(); // Removing the element at the front.
    }
}