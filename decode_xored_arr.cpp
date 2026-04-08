class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>nums(encoded.size()+1);
        nums[0]=first;
        for(int i=0;i<encoded.size();i++){
            nums[i+1]=nums[i]^encoded[i];
        }
        return nums;
    }
};