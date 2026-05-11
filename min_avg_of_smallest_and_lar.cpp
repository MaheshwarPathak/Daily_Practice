class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int minimum=100,n=nums.size();
        for(int i=0;i<n/2;i++){
            int sum=nums[i]+nums[n-i-1];
            minimum=min(minimum,sum);
        }
        return minimum/2.0;
    }
};