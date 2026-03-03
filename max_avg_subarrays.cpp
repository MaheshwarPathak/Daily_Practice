class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max_sum=0,current_sum=0;
        int n=nums.size();
        double max_avg;
        for(int i=0;i<k;i++){
            max_sum+=nums[i];
        }
        current_sum=max_sum;
        for(int i=k;i<n;i++){
            current_sum+=nums[i]-nums[i-k];
        max_sum=max(max_sum,current_sum);
        }
        max_avg=max_sum/k;
        return max_avg;
    }
};