class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int m=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++,m++){ 
            if(i!=nums[i])
           
            break;

        }
            return m;
            
            // return nums.size();
    }
};