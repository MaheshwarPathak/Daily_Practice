class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long xorr = 0;
        for(int i = 0; i < nums.size(); i++){
            xorr = xorr ^ nums[i];
        }

        long long rightmostbit = (xorr & xorr - 1) ^ xorr;
        int a = 0, b = 0;

        for(int i = 0; i < nums.size(); i++){
            if(rightmostbit & nums[i]){
                a = a ^ nums[i];
            }else{
                b = b ^ nums[i];
            }
        }
        return {a, b};
    }
};