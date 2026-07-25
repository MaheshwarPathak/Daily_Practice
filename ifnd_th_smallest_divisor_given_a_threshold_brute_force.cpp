class Solution {
public:
    int smallestDivisor(vector<int>& arr, int limit) {
        int n = arr.size();
        int maxi = *max_element(arr.begin(), arr.end());

        for (int d = 1; d <= maxi; d++) {
            int sum = 0;

            for (int i = 0; i < n; i++) {
                sum += ceil((double)arr[i] / (double)d);
            }

            if (sum <= limit) {
                return d;
            }
        }

        return -1;
    }
};