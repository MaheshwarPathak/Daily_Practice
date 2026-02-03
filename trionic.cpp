class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return false;

        int flag = 0;
        int m = -1, p = -1;

        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[i - 1]) {
                m = i;
            } else {
                break;
            }
        }

        if (m == -1 || m == n - 1) return false;

        for (int i = m + 1; i < n; i++) {
            if (nums[i] < nums[i - 1]) {
                p = i;
            } else {
                break;
            }
        }

        if (p == -1 || p == n - 1) return false;

        for (int i = p + 1; i < n; i++) {
            if (nums[i] <= nums[i - 1]) {
                return false;
            }
        }

        return true;
    }
};
