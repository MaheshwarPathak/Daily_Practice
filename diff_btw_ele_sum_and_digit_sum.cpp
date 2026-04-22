class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int totalSum=0,digitSum=0;
        for(int num:nums){
            totalSum+=num;
        
        while(num>0){
            int digit=num%10;
            digitSum+=digit;
            num/=10;
        }
        }
        return totalSum-digitSum;
    }
};