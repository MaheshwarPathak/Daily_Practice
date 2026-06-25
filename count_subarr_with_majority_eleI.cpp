class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        long long ans = 0;
        for(int i=0;i<nums.size();i++){
            int cnt = 0;
            for(int j=i;j<nums.size();j++){
                if(nums[j] == target){
                    cnt++;
                }
                int len = j - i + 1;
                if(cnt > len/2)
                ans++;
            }
        }
        return ans;
    }
};