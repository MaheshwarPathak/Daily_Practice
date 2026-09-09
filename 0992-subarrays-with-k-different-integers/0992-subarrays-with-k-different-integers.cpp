class Solution {
public:
    int solve(vector<int>& nums, int k){
        int l = 0, r = 0, cnt = 0;
        int n = nums.size();
        unordered_map<int, int>hash;
        while(r < nums.size()){
            hash[nums[r]]++;

            while(hash.size() > k){
                hash[nums[l]]--;

                if(hash[nums[l]] == 0)
                    hash.erase(nums[l]);
                l = l + 1;
            }
            cnt = cnt + (r - l + 1);
            r++;
        }
        return cnt;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return solve(nums, k) - solve(nums, k - 1);
    }
};