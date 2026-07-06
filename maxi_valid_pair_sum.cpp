 class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();

        long long ans = 0;
        int maxLeft = nums[0];

        for (int j = k; j < n; j++) {
            maxLeft = max(maxLeft, nums[j - k]);
            ans = max(ans, 1LL * maxLeft + nums[j]);
        }

        return ans;
    }
};