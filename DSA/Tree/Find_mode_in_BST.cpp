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
    unordered_map<int, int> freq;

    void dfs(TreeNode* root) {
        if (!root) return;
        freq[root->val]++;
        dfs(root->left);
        dfs(root->right);
    }

    vector<int> findMode(TreeNode* root) {
        dfs(root);

        int maxFreq = 0;
        for (auto &p : freq)
            maxFreq = max(maxFreq, p.second);

        vector<int> ans;
        for (auto &p : freq)
            if (p.second == maxFreq)
                ans.push_back(p.first);

        return ans;
    }
};