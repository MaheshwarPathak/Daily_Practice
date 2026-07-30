class Solution {
public:
    bool canPlace(vector<int>& stalls, int cows, int d) {
        int count = 1;
        int lastPos = stalls[0];

        for (int i = 1; i < stalls.size(); i++) {
            if (stalls[i] - lastPos >= d) {
                count++;
                lastPos = stalls[i];
            }

            if (count >= cows)
                return true;
        }

        return false;
    }

    int aggressiveCows(vector<int>& stalls, int cows) {
        sort(stalls.begin(), stalls.end());

        int low = 1;
        int high = stalls.back() - stalls.front();
        int ans = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (canPlace(stalls, cows, mid)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return ans;
    }
};