class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        for(auto i:freq){
            if(i.second==1){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};