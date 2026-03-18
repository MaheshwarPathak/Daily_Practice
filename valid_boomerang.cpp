class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
         int x1 = points[0][0], y1 = points[0][1];
        int x2 = points[1][0], y2 = points[1][1];
        int x3 = points[2][0], y3 = points[2][1];

        if ((x1 == x2 && y1 == y2) ||
            (x1 == x3 && y1 == y3) ||
            (x2 == x3 && y2 == y3)) {
            return false;
        }
        return (y2 - y1) * (x3 - x1) != (y3 - y1) * (x2 - x1);
    }
};