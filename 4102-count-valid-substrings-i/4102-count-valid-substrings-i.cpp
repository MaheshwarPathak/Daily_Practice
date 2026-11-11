class Solution {
public:
    long long countValidSubstrings(string s) {
        int n = s.size();
        int p = -1;
        long long total = 0;
        for(int r = 0; r < n; r++){
            if(r >= 2 && s[r - 2] == 'a' && s[r - 1] == 'b' && s[r] == 'c'){
                p = r - 2;
            }
            total += (r - p);
        }
        return total;
    }
};