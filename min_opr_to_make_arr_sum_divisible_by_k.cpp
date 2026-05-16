class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
         int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int minus=sum;
        int operations=0;
        while(minus%k!=0){
            minus--;
            operations++;
        }
        return operations;
    }
};