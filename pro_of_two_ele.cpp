class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max=0;
        int ans=0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                max=(nums[i]-1)*(nums[j]-1);
                if(max>ans)
                ans=max;
            }
        }
        return ans;
    }
};