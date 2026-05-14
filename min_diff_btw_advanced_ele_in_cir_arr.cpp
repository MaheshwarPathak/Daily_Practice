class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int max_diff=0;
        for(int i=0;i<nums.size();i++){
            int difference=abs(nums[i]-nums[(i+1)%nums.size()]);
            max_diff=max(max_diff,difference);
        }
        return max_diff;
    }
};