class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>ans;
        int maxLen=0;
        int sum=0;
        ans[0]=-1;
        for(int i=0;i<nums.size();i++){
            sum+=((nums[i]==0)?-1:1);
            if(ans.find(sum)!=ans.end()){
                maxLen=max(maxLen,i-ans[sum]);
            }else
                ans[sum]=i;
            }
        return maxLen;
    }
};