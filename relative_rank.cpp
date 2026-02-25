class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<pair<int, int>> scoreWithIndex;
        for (int i = 0; i < n; ++i) scoreWithIndex.emplace_back(score[i], i);
        sort(scoreWithIndex.rbegin(), scoreWithIndex.rend());
        string medals[3] = {"Gold Medal", "Silver Medal", "Bronze Medal"};
        vector<string> place(n);
        for (int i = 0; i < n; ++i) {
            int idx = scoreWithIndex[i].second;
            if (i < 3) place[idx] = medals[i];
            else place[idx] = to_string(i + 1);
        }
        return place;
    }
};