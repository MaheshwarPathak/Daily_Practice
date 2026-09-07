class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int>cnt(3, 0);
        int left = 0, ans = 0, n = s.size();

        for(int right = 0; right < n; right++){
            cnt[s[right] - 'a']++;
        
        while(cnt[0] && cnt[1] && cnt[2]){
            ans += n - right;
            cnt[s[left] - 'a']--;
            left++;
        }
    }
        return ans;
    }
};