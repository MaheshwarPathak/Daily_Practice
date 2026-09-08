class Solution {
public: 
    int solve(vector<int>& nums, int k){
        int l = 0, r = 0, sum = 0, cnt = 0;
        if(k < 0) return 0;
        while(r < nums.size()){
            sum += nums[r] % 2;

            while(sum > k){
                sum -= nums[l] % 2;
                l = l + 1;
            }
            cnt = cnt + (r - l + 1);
            r++;
        }
        return cnt;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return solve(nums, k) - solve(nums, k - 1);
    }
};