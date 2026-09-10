class Solution {
public:
    void solve(int start, int k, int n, vector<int>& ans, vector<vector<int>>& res){
        if(k == ans.size()){ 
        if(n == 0){
            res.push_back(ans);
        }
            return;
        }
        for(int i = start; i <= 9; i++){
            ans.push_back(i);
            solve(i + 1, k, n - i, ans, res);
            ans.pop_back();
        }

    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>ans;
        vector<vector<int>>res;
        solve(1, k, n, ans, res);
        return res;
    }
};