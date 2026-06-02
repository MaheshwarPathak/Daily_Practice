class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration,
                           vector<int>& waterStartTime, vector<int>& waterDuration) {
        
        int ans = INT_MAX;

        // Land first, then Water
        for(int i = 0; i < landStartTime.size(); i++) {
            int landFinish = landStartTime[i] + landDuration[i];

            for(int j = 0; j < waterStartTime.size(); j++) {
                int waterBegin = max(landFinish, waterStartTime[j]);
                int totalFinish = waterBegin + waterDuration[j];

                ans = min(ans, totalFinish);
            }
        }

        // Water first, then Land
        for(int i = 0; i < waterStartTime.size(); i++) {
            int waterFinish = waterStartTime[i] + waterDuration[i];

            for(int j = 0; j < landStartTime.size(); j++) {
                int landBegin = max(waterFinish, landStartTime[j]);
                int totalFinish = landBegin + landDuration[j];

                ans = min(ans, totalFinish);
            }
        }

        return ans;
    }
};