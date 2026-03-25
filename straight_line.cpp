class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& co) {
         int n = co.size();
        if (n == 2) return true;
        int x1 = co[0][0], y1 = co[0][1];
        int x2 = co[1][0], y2 = co[1][1];
        for (int i = 2; i < n; ++i) {
            int x = co[i][0], y = co[i][1];
            if ((y2 - y1) * (x - x1) != (y - y1) * (x2 - x1)) return false;
        }
        return true;
    }
};