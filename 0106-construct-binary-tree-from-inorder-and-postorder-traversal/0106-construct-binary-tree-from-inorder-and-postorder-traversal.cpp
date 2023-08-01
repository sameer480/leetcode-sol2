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
TreeNode*builder(vector<int>& inorder, vector<int>& postorder,int pos,int poe,int ins,int ine){
    if (ins > ine || pos > poe) {
            return nullptr;
        }

        int rootdata = postorder[poe];
        int rootindex = -1;
        for (int i = ins; i <= ine; i++) {
            if (rootdata == inorder[i]) {
                rootindex = i;
                break;
            }
        }

        int lins = ins;
        int line = rootindex - 1;
        int lpos = pos;
        int lpoe = pos - lins + line;
        int rpos = lpoe + 1;
        int rpoe = poe - 1;
        int rins = rootindex + 1;
        int rine = ine;

        TreeNode* root = new TreeNode(rootdata);
        root->left = builder(inorder, postorder, lpos, lpoe, lins, line);
        root->right = builder(inorder, postorder, rpos, rpoe, rins, rine);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int inl=inorder.size();
        int postl=postorder.size();
        return builder(inorder,postorder,0,postl-1,0,inl-1);
        
    }
};