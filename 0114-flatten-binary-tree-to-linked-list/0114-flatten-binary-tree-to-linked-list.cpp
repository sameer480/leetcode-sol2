/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void flatten(TreeNode* root) {
        if (root == nullptr) {
            return;
        }

        TreeNode* prev = nullptr;
        inorder(root, prev);
    }

private:
    void inorder(TreeNode* root, TreeNode*& prev) {
        if (root == nullptr) {
            return;
        }

        TreeNode* left = root->left;
        TreeNode* right = root->right;

        if (prev != nullptr) {
            prev->right = root;
            prev->left = nullptr;
        }

        prev = root;
        inorder(left, prev);
        inorder(right, prev);
    }
};