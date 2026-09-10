class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int l = 0, r = 0, n = g.size(), m = s.size();
        while(l < m && r < n){
            if(g[r] <= s[l]){
                r = r + 1;
            }
            l = l + 1;
        }
        return r;
    }
};