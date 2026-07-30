class Solution {
public:
    int largestSum(vector<int>&nums, int mid){
        int k = 1, sum = 0;
        for(int num : nums){
            if(num + sum <= mid){
                sum += num;
            }else{
                k++;
                sum = num;
            }
        }
        return k;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        if(k > n) return -1;
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while(low <= high){
            int mid = (low + high) / 2;
            if(largestSum(nums, mid) > k){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return low;
    }
};