class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
         int n = nums.size(), ans = 0;
        while(!is_sorted(nums.begin(), nums.end())) {
            int curr = 0, sum = INT_MAX;
            for(int i = 0; i < n - 1; ++i) 
                if(nums[i] + nums[i + 1] < sum) 
                curr = i, sum = nums[i] + nums[i + 1];

            vector<int> res;
            for(int i = 0; i < curr; ++i) res.push_back(nums[i]);
            res.push_back(nums[curr] + nums[curr + 1]);
            for(int i = curr + 2; i < n; ++i) res.push_back(nums[i]);
            swap(nums, res);
            --n, ++ans;
        }
        return ans;
    }
};