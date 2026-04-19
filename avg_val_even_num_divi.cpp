class Solution {
public:
    int averageValue(vector<int>& nums) {
      int count=0,sum=0;
      for(int i=0;i<nums.size();i++){
        if(nums[i]%6==0){
            sum+=nums[i];
            count++;
        }
      }  
      return count?sum/count:0;
    }
};