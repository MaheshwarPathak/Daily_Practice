class GasStationSolver {
public:
    long double minimiseMaxDistance(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> howMany(n - 1, 0);

        for (int gasStations = 1; gasStations <= k; gasStations++) {
            long double maxSection = -1;
            int maxInd = -1;

            for (int i = 0; i < n - 1; i++) {
                long double diff = arr[i + 1] - arr[i];
                long double sectionLength = diff / (howMany[i] + 1.0);

                if (sectionLength > maxSection) {
                    maxSection = sectionLength;
                    maxInd = i;
                }
            }

            howMany[maxInd]++;
        }

        long double maxAns = -1;

        for (int i = 0; i < n - 1; i++) {
            long double diff = arr[i + 1] - arr[i];
            long double sectionLength = diff / (howMany[i] + 1.0);
            maxAns = max(maxAns, sectionLength);
        }

        return maxAns;
    }
};