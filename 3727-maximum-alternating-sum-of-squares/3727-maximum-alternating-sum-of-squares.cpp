class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
       int n = nums.size();
       vector<int>ans(n);
       sort(nums.begin(), nums.end(), [](int a, int b){
        return abs(a) < abs(b);
       });
       int l = 0, r = n - 1;
       for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            ans[i] = nums[r--];
        }else{
            ans[i] = nums[l++];
         }
       }
       long long maxSum = 0;
       for(int i = 0; i < n; i++){
        int val = ans[i];
        if(i % 2 == 0){ 
           maxSum += val * val; 
        }else{
            maxSum -= val * val;
        }
       }
       return maxSum;
    }
};