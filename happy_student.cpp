class Solution {
public:
    int countWays(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ways=nums[0]>0;
        for(int i=0;i<nums.size();i++){
            int count=i+1;
            if(count>nums[i]&&(i+1==nums.size()||count<nums[i+1]))
            ways++;
        }
        return ways;
    }
};