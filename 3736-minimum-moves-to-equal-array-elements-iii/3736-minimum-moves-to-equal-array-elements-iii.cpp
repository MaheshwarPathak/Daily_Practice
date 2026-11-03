class Solution {
public:
    int minMoves(vector<int>& nums) {
        int moves = 0;
        int maxi = *max_element(nums.begin(), nums.end());
        for(int num : nums){
            moves += maxi - num;
        }
        return moves;
    }
};