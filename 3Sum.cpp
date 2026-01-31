class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // vector<vector<int>> res;
        // sort(nums.begin(), nums.end());
        // int n = nums.size();

        // for (int i = 0; i < n - 2; ++i) {
        //     if (i > 0 && nums[i] == nums[i - 1]) continue; // skip duplicates

        //     int left = i + 1, right = n - 1;
        //     while (left < right) {
        //         int sum = nums[i] + nums[left] + nums[right];
        //         if (sum < 0) {
        //             ++left;
        //         } else if (sum > 0) {
        //             --right;
        //         } else {
        //             res.push_back({nums[i], nums[left], nums[right]});
        //             while (left < right && nums[left] == nums[left + 1]) ++left;
        //             while (left < right && nums[right] == nums[right - 1]) --right;
        //             ++left;
        //             --right;
        //         }
        //     }
        // }

        // return res;
        vector<vector<int>>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1,k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum<0){
                    j++;
                }else if(sum>0){
                    k--;
                }else{
                    ans.push_back({nums[i],nums[j],nums[k]});
                    while(j<k && nums[j]==nums[j+1]) j++;
                    while(j<k && nums[k]==nums[k-1]) k--;
                    j++;
                    k--;
                }
            }
        }
        return ans;
    }
};