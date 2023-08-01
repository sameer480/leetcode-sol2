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
    bool isSymmetric(TreeNode* root) {
        if (root == NULL) {
            return true;
        }

        return isMirror(root->left, root->right);
    }

    bool isMirror(TreeNode* leftSubtree, TreeNode* rightSubtree) {
        // Base case: If both subtrees are NULL, they are symmetric
        if (leftSubtree == NULL && rightSubtree == NULL) {
            return true;
        }

        // If one of the subtrees is NULL, they are not symmetric
        if (leftSubtree == NULL || rightSubtree == NULL) {
            return false;
        }

        // Check if the current nodes have the same value and their subtrees are symmetric
        return (leftSubtree->val == rightSubtree->val) &&
               isMirror(leftSubtree->left, rightSubtree->right) &&
               isMirror(leftSubtree->right, rightSubtree->left);
    }
};
