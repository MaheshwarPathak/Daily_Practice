class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>freq;
        for(int num : nums){
            if(num % 2 == 0){ 
            freq[num]++;
            }
        }
        int ans = -1, maxFreq = 0;
        for(auto it : freq){
            if(it.second > maxFreq){
                maxFreq = it.second;
                ans = it.first;
            }
            else if(it.second == maxFreq && it.first < ans){
                ans = it.first;
            }
        }
        return ans;
    }
};