class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_set<int>ans(nums.begin(),nums.end());
        int count=0;
        for(int x:nums){
            if(ans.count(x+diff) && ans.count(x+2*diff)){
                count++;
            }
        }
        return count;
    }
};