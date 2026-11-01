class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int n = nums.size();
        long long min_val = -1;
        for(int i = 0; i < n; i += 2){
            string num1 = to_string(nums[i]);
            string num2 = to_string(nums[i + 1]);

            string merge = num1 + num2;

            long long curr = stoll(merge);
            if(min_val == -1 || curr < min_val){
                min_val = curr;
            }
        }
        return min_val;
    }
};