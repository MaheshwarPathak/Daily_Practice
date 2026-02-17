class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<int> v;
        vector<string> v1;
        if (nums.empty()) return v1;
        v.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++) {
            int u = nums[i];
            if ((long long)u - (long long)v.back() == 1LL) {
                v.push_back(u);
            } else {
                string s;
                if (v.size() == 1) {
                    s += to_string(v[0]);
                } else {
                    s += to_string(v[0]) + "->" + to_string(v.back());
                }
                v1.push_back(s);
                v.clear();
                v.push_back(u);
            }
        }
        // Last range
        string s;
        if (v.size() == 1) {
            s += to_string(v[0]);
        } else {
            s += to_string(v[0]) + "->" + to_string(v.back());
        }
        v1.push_back(s);
        return v1;
    }
};
