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
#include <unordered_map>

class Solution {
public:
    bool solve(TreeNode* root, int k, std::unordered_map<int, int>& st) {
        if (root == NULL) {
            return false;
        }

        if (st.find(k - root->val) != st.end()) {
            return true;
        }

        st.insert({root->val, 1});
        return solve(root->left, k, st) || solve(root->right, k, st);
    }

    bool findTarget(TreeNode* root, int k) {
        std::unordered_map<int, int> st;
        return solve(root, k, st);
    }
};
