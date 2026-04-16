class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long count=0,ans=0;
        for(int n:nums){
            if(n==0){
                count++;
                ans+=count;
            }else{
                count=0;
            }
        }
        return ans;
    }
};