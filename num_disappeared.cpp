class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>unique(nums.begin(),nums.end());
        vector<int>ans;
        for(int i=1;i<=n;i++){
            if(unique.find(i)==unique.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};