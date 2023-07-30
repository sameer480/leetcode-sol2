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

    bool isSameTree(TreeNode* p, TreeNode* q) {
       if (p == NULL && q == NULL) {
            return true;
        }
        if (p == NULL || q == NULL) {
            return false;
        }
        
        if (p->val != q->val) {
            return false;
        }
        
        // Check the left and right subtrees recursively
        bool leftSubtreeSame = isSameTree(p->left, q->left);
        bool rightSubtreeSame = isSameTree(p->right, q->right);
        
        // Return true only if both left and right subtrees are the same
        return leftSubtreeSame && rightSubtreeSame;
    }
};