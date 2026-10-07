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
    TreeNode* buildTreePostIn(vector<int>& inorder, int iS, int iE, vector<int>& postorder, int pS, int pE, map<int, int>& hm){
        if(iS > iE || pS > pE) return NULL;
        TreeNode* root = new TreeNode(postorder[pE]);

        int inRoot = hm[postorder[pE]];
        int numsLeft = inRoot - iS;

        root -> left = buildTreePostIn(inorder, iS, inRoot - 1, postorder, pS, pS + numsLeft - 1, hm);

        root -> right = buildTreePostIn(inorder, inRoot + 1, iE, postorder, pS + numsLeft, pE - 1, hm);

        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map<int, int>hm;

        for(int i = 0; i < inorder.size(); i++){
            hm[inorder[i]] = i;
        }

        TreeNode* root = buildTreePostIn(inorder, 0, inorder.size() - 1, postorder, 0, postorder.size() - 1, hm);

        return root;
    }
};