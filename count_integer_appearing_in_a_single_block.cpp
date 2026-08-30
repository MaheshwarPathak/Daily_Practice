class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        for(int i = 0; i < n; i++){
         if(ans.empty() || ans.back() != nums[i]){
            ans.push_back(nums[i]);
          }
        }
        unordered_map<int, int>freq;
        for(int num : ans){
            freq[num]++;
        }
        int cnt = 0;
        for(auto &m : freq){
            if(m.second == 1){
                cnt++;
            }
        }
        return cnt;
    }
};