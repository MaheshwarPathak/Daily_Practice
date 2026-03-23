class Solution {
public:
    bool uniqueOccurrences(vector<int>& nums) {
       unordered_map<int,int>ans;
       for(int num:nums){
            ans[num]++; 
       } 
        unordered_set<int>freq;
        for(auto n:ans){
            if(freq.count(n.second)){ 
            return false;
            }
            freq.insert(n.second);
        }
        return true;
    }
};