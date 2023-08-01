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
 TreeNode* builder(vector<int>& preorder, vector<int>& inorder, int pos, int poe, int ins, int ine) {
        if (ins > ine || pos > poe) {
            return nullptr;
        }

        int rootdata = preorder[pos]; // Corrected rootdata assignment
        int rootindex = -1;
        for (int i = ins; i <= ine; i++) {
            if (rootdata == inorder[i]) {
                rootindex = i;
                break;
            }
        }

        int lins = ins;
        int line = rootindex - 1;
        int lpos = pos + 1;
        int lpoe = lpos + line - lins;
        int rins = rootindex + 1;
        int rine = ine;
        int rpos = lpoe + 1;
        int rpoe = poe;

        TreeNode* root = new TreeNode(rootdata);
        root->left = builder(preorder, inorder, lpos, lpoe, lins, line);
        root->right = builder(preorder, inorder, rpos, rpoe, rins, rine);
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int prel = preorder.size();
        int inl = inorder.size();
        return builder(preorder, inorder, 0, prel - 1, 0, inl - 1);
    }
};