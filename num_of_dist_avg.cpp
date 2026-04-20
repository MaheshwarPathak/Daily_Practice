class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        unordered_map<double,int>m;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()/2;i++){
            m[(nums[i]+nums[nums.size()-i-1])/2.0]++;
        }
        return m.size();
    }
};