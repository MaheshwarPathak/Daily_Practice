class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size(),sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int lsum=0;
        for(int i=0;i<n;i++){
            int diff=sum-2*lsum+(2*i-n)*nums[i];
            ans.push_back(diff);
            lsum+=nums[i];
        }
        return ans;
    }
};