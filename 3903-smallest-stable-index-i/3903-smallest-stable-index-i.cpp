class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size(), diff;
        vector<int>prefix(n), suffix(n);
        prefix[0] = nums[0] , suffix[n - 1] = nums[n - 1];

        for(int i = 1; i < n; i++){
            prefix[i] = max(prefix[i - 1], nums[i]);
        }
        for(int i = n - 2; i >= 0; i--){
            suffix[i] = min(suffix[i + 1], nums[i]);
        }
        for(int i = 0; i < n; i++){
            diff = prefix[i] - suffix[i];
            if(diff <= k){
                return i;
            }
        }
        return -1;
    }
};