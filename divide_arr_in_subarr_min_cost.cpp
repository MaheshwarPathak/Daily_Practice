class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n=nums.size();
        int sum1=nums[0];
        sort(nums.begin()+1,nums.end());
        return sum1+nums[1]+nums[2];
    }
};