class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;

        for(int i = 0; i < n; i++) {
            if(n == 1) {
                cnt++;
            }
            else if(i == 0) {
                if(nums[i] >= nums[i + 1])
                    cnt++;
            }
            else if(i == n - 1) {
                if(nums[i] >= nums[i - 1])
                    cnt++;
            }
            else {
                if(2 * nums[i] >= nums[i - 1] + nums[i + 1])
                    cnt++;
            }
        }

        return cnt;
    }
};