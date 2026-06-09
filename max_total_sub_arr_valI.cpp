class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long  n=nums.size();
        long long ans;
        sort(nums.begin(),nums.end());
        long long maxi=nums[n-1];
        long long mini=nums[0];
        ans=k*(maxi-mini);
        return ans;
    }
};