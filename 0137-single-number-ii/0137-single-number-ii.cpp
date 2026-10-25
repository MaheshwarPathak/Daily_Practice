class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // map<int, int>mpp;
        // for(int i = 0; i < nums.size(); i++){
        //     mpp[nums[i]]++;
        // }

        // for(auto it : mpp){
        //     if(it.second == 1)
        //     return it.first;
        // }
        // return -1;

        int result = 0;
        for(int i = 0; i < 32; i++){
            int sum = 0;
            int bit = (1 << i);

            for(int num : nums){
                if((num & bit) != 0){
                    sum++;
                }
            }
            if(sum % 3 != 0){
                result |= bit;
            }
        }
        return result;
    }
};