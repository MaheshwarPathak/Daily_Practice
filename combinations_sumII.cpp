class Solution {
    private:
    void findCombination(int idx, int target, vector<int>&nums,vector<int>&res,vector<vector<int>>&ans){
        if(target == 0){
            ans.push_back(res);
            return;
        }
        for(int i = idx; i<nums.size(); i++){
            if(i>idx && nums[i] == nums[i-1]) continue;
            if(nums[i] > target) break;
            res.push_back(nums[i]);

            findCombination(i+1,target - nums[i] ,nums,res,ans);
            res.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>res;
        vector<vector<int>>ans;
        findCombination(0,target,candidates,res,ans);
        return ans;
    }
};