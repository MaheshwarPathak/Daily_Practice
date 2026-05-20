class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int n=nums.size();
      long long sum=0;
      for(int i=n-2;i>=n/3;i-=2){
       sum+=nums[i];
      }
       return sum;
    }
}; 