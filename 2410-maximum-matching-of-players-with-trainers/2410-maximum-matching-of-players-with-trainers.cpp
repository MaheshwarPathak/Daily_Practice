class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        int l  = 0, r = 0, n = players.size(), m = trainers.size();

        while(l < n  && r < m){
            if(players[l] <= trainers[r]){ 
             l = l + 1;
            }
            r = r + 1;
        }
        return l;
    }
};