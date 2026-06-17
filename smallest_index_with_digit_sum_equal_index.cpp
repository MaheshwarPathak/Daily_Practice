class Solution {
public:
    long sum(int i){
        long s=0;
        while(i){
            s+=i%10;
            i/=10;
        }
        return s;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(i==sum(nums[i])) return i;
        }
        return -1;
    }
};