class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int p = max(x1, min(x2, xCenter));
        int q = max(y1, min(y2, yCenter));
        int dist = sqrt((p - xCenter) * (p - xCenter) + (q - yCenter) * (q - yCenter));

        if(dist <= radius) return true;
        return false;

    }
};