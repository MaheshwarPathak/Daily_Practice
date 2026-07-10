class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        int longest = 1, cnt = 0,lastSmaller = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i] - 1 == lastSmaller){
                cnt = cnt + 1;
                lastSmaller = nums[i];
            }else if(nums[i] != lastSmaller){
                cnt = 1;
                lastSmaller = nums[i];
            }

            longest = max(longest,cnt);
        }
        return longest;
    }
};