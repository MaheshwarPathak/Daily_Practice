class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>mini(n);

        int minimum = INT_MAX;
        for(int i = n - 1; i >= 0; i--){
            if(nums[i] < minimum){
                minimum = nums[i];
            }
                mini[i] = minimum;
        }
        int maxi = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] > maxi)
            maxi = nums[i];
            if((maxi - mini[i]) <= k) return i;
        }
        return -1;
    }
};