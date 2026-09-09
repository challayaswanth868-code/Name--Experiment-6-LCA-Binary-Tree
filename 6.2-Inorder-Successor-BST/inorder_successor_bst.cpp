// Experiment 6: Inorder Successor in BST

#include <iostream>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};

class Solution {
public:
    TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p) {
        TreeNode* successor = nullptr;

        while (root != nullptr) {
            if (p->val >= root->val) {
                root = root->right;
            } else {
                successor = root;
                root = root->left;
            }
        }

        return successor;
    }
};

int main() {

    // Create the Binary Search Tree
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);
    root->left->left->left = new TreeNode(1);

    // Select node p
    TreeNode* p = root->left;  // Node 3

    // Find inorder successor
    Solution solution;
    TreeNode* successor = solution.inorderSuccessor(root, p);

    // Display output
    cout << "Experiment 6: Inorder Successor in BST" << endl;
    cout << "Node P: " << p->val << endl;

    if (successor != nullptr) {
        cout << "Inorder Successor: " << successor->val << endl;
    } else {
        cout << "Inorder Successor: None" << endl;
    }

    return 0;
}