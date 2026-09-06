class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0, r = 0, maxLen = 0, zeros = 0, len;

        while(r < nums.size()){
            if(nums[r] == 0) zeros++;
            if(zeros > k){
                if(nums[l] == 0) zeros--;
                l++;
            }
            if(zeros <= k) 
            len = r - l + 1;
            maxLen = max(maxLen, len);
            r++;
        }
        return maxLen;
    }
};