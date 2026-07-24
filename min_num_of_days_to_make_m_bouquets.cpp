class Solution {
public:
    bool isPossible(vector<int>&bloomDay, int day, int m, int k){
        int count = 0, bouquets = 0;
        for(int bloom : bloomDay){
            if(bloom <= day){
                count++;
                if(count == k){
                    bouquets++;
                    count = 0;
                }
            }else{
                count = 0;
            }
        }
        return bouquets >= m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long totalFlowers = 1LL * m * k;
        if(totalFlowers > bloomDay.size()) return -1;
        int mini = *min_element(bloomDay.begin(), bloomDay.end());
        int maxi = *max_element(bloomDay.begin(), bloomDay.end());

        int low = mini, high = maxi, result = -1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(isPossible(bloomDay, mid, m, k)){
                result = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return low;
    }
};