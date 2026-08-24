class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
         vector<vector<int>> res;

        int subset = (1 << nums.size());

        for (int num = 0; num < subset; num++) {
            vector<int> ans;

            for (int i = 0; i < nums.size(); i++) {
                if (num & (1 << i)) {
                    ans.push_back(nums[i]);
                }
            }

            res.push_back(ans);
        }

        return res;
    }
};