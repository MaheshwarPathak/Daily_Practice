class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int count=0,sum=0;
        unordered_map<int,int>prefixSum;
        for(int i=0;i<nums.size();i++){
            sum=((sum+nums[i])%k+k)%k;
            if(sum==0)
            count++;
        count+=prefixSum[sum];
        prefixSum[sum]++;
        }
        return count;
        
    }
};