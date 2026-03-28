class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size(),count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(nums[j]<nums[i]&&j!=i){
                    count++;
                }
            }
             ans.push_back(count);
             count=0;
        }
        return ans;
    }
};