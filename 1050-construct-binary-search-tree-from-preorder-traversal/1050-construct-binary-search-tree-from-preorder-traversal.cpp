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
     TreeNode* bstFromPreorder(vector<int>& preorder) {
        if (preorder.empty()) {
            return NULL;
        }

        TreeNode* root = new TreeNode(preorder[0]);
        for (int i = 1; i < preorder.size(); i++) {
            insertNode(root, preorder[i]);
        }
        return root;
    }

    void insertNode(TreeNode* root, int val) {
        if (val < root->val) {
            if (root->left == NULL) {
                root->left = new TreeNode(val);
            } else {
                insertNode(root->left, val);
            }
        } else {
            if (root->right == NULL) {
                root->right = new TreeNode(val);
            } else {
                insertNode(root->right, val);
            }
        }
    }
};