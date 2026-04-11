class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(nums[n-1]%nums[0]==0)
        return nums[0];
        int gcd=0;
        for(int i=2;i<=nums[0];i++){
            if(nums[0]%i==0 && nums[n-1]%i==0){
                gcd=i;
            }
        }
        if(gcd>1) return gcd;
        return 1;
    }
};