class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        
        for (int i = 0; i < n; ++i) {
            int current_and = nums[i];
            int current_min = nums[i];
            
            for (int j = i; j < n; ++j) {
                current_and &= nums[j];
                current_min = min(current_min, nums[j]);
                
                if (current_and == current_min) {
                    ++count;
                }
            }
        }
        
        return count;
    }
};