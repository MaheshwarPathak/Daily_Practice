class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
         sort(nums.begin(), nums.end());
        int pairs = 0, low = 0, high = nums.size()-1;
        while(low < high) {
            if(nums[low] + nums[high] < target) {
                pairs += high - low;
                low++;
            }
            else high--;
        }
        return pairs;
    }
};