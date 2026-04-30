class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int left=0,right=nums.size()/2;
        while(left<nums.size()/2 && right<nums.size()){
            if(2*nums[left]<=nums[right])
            left++;
            right++;
        }
            return left*2;
    }
};