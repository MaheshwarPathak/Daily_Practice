class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>>res;
        for(int mask = 0; mask < (1 << n); mask++){
            vector<int>ans;
            for(int i = 0; i < n; i++){
                if(mask & (1 << i)){
                    ans.push_back(nums[i]);
                }
            }
            sort(nums.begin(), nums.end());
            res.insert(ans);
        }
        vector<vector<int>>subset(res.begin(), res.end());
        return subset;
    }
};