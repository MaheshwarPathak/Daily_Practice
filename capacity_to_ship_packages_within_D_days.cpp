class Solution {
public:
    int needDays(vector<int>&weights, int capacity){
        int day = 1;
        int currLoad = 0;
        for(int w : weights){
            if(currLoad + w > capacity){
                day++ ;
                currLoad = w;
            }else{
                currLoad += w;
            }
        }
        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int left = *max_element(weights.begin(), weights.end());
        int right = accumulate(weights.begin(), weights.end(), 0);

        while(left < right){
            int mid = left + (right - left) / 2;
            int need = needDays(weights, mid);
            if(need <= days){
                right = mid;
            }else{
                left = mid + 1;
            }
        }
        return left;
    }
};