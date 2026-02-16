class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        for (int i = 0, n = nums.size(); i < n; ++i) {
            if (map.count(nums[i]) && i - map[nums[i]] <= k) return true;
            map[nums[i]] = i;
        }
        return false;
    }
};