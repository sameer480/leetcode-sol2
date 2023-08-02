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
#include <vector>

class BSTIterator {
private:
    std::vector<int> v;
    int index;

public:
    BSTIterator(TreeNode* root) {
        index = 0;
        inorder(root, v);
    }

    void inorder(TreeNode* root, std::vector<int>& v) {
        if (root == nullptr) {
            return;
        }
        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }

    int next() {
        return v[index++];
    }

    bool hasNext() {
        return index < v.size();
    }
};


/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */