class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>freq;
        for(int num:nums){ 
            freq[num]++;
            if(freq[num]==2){
                ans.push_back(num);
            }
        }
        return ans;
    }
};