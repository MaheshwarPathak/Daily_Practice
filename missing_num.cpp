class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        if(n==0) return ans;
        sort(nums.begin(),nums.end());
        int min=nums[0],max=nums[n-1];
        unordered_set<int> s(nums.begin(), nums.end());
        for(int i=min;i<=max;i++){
            if(s.find(i)==s.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};