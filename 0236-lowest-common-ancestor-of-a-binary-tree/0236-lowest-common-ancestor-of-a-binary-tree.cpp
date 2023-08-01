/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL) {
            return NULL;
        }

        if (root == p || root == q) {
            return root;
        }

        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);

        if (left != NULL && right != NULL) {
            // If both left and right are not NULL, that means the current root is the LCA
            return root;
        } else if (left != NULL) {
            // If only the left is not NULL, return the left LCA
            return left;
        } else {
            // If only the right is not NULL, return the right LCA
            return right;
        }
    }
};
