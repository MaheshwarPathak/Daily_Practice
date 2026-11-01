class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini = *min_element(nums.begin(), nums.end());
        int n = nums.size();
        long long moves = 0;
        for(int x : nums){
            moves += x - mini;
        }
        return moves;
    }
};