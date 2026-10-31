class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        unordered_map<int, int>freq;
        for(int num : nums){
            freq[num]++;
        }
        int tar = floor(n / 3);
        for(auto it : freq){
            if(it.second > tar){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};