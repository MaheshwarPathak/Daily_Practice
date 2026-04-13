class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int i=0;
        while(i<nums.size()){
            if(i%10==nums[i]){
                return i;
                break;
            }
            i++;
        }
        return -1;
    }
};