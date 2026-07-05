class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
         int n = nums.size();
         int mid = nums[n / 2];
         int cnt = 0;
         for(auto &i : nums){
            if(i == mid) cnt++;
         }
         return cnt == 1;
    }
};