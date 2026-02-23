class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
         int count=0;
        for(int i=0;i<timeSeries.size();i++){
            count+=duration;
            int poisionLasts = timeSeries[i]+duration;
            if(i!=timeSeries.size()-1){
                if(timeSeries[i+1]<poisionLasts){
                    count-=(poisionLasts-timeSeries[i+1]);
                }
            }
        }
        return count;
    }
};