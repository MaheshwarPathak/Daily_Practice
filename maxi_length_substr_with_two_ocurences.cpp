class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char, int>freq;
        int left = 0, right = 0, n = s.size();
        int res = 0;
        while(right < n){
            freq[s[right]]++;

            while(freq[s[right]] > 2){
                freq[s[left]]--;
                left++;
            }
            res = max(res, right - left + 1);
            right++; 
        }
        return res;
    }
};