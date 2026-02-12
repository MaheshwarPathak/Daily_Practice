class Solution {
public:
    vector<int> getRow(int n) {
        vector<int> ans(n+1);
        ans[0] = 1;
        for(int i = 0; i < n+1; i++){
            for(int j = i; j > 0; j--){
                ans[j] += ans[j-1];
            }
        }
        return ans;
    }
};