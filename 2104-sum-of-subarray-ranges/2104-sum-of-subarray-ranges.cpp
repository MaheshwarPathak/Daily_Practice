class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long sum = 0, n = nums.size();
        for(int i = 0; i < n - 1; i++){
            long long largest = nums[i], smallest = nums[i];
            for(int j = i + 1; j < n; j++){
                largest = max(largest, (long long)nums[j]);
                smallest = min(smallest, (long long)nums[j]);
                sum = sum + (largest - smallest);
            }
        }
        return sum;
    }
};