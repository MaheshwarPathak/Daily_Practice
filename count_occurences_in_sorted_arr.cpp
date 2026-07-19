class Solution {
public:
    int firstOccurrence(vector<int>& arr, int x) {
        int n = arr.size();
        int low = 0, high = n - 1;
        int first = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == x) {
                first = mid;
                high = mid - 1;
            } else if (arr[mid] < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return first;
    }

    int lastOccurrence(vector<int>& arr, int x) {
        int n = arr.size();
        int low = 0, high = n - 1;
        int last = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == x) {
                last = mid;
                low = mid + 1;
            } else if (arr[mid] < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return last;
    }

    int count(vector<int>& arr, int x) {
        int first = firstOccurrence(arr, x);
        if (first == -1) return 0;

        int last = lastOccurrence(arr, x);
        return last - first + 1;
    }
};