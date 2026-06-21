class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int cnt = 0;
        sort(costs.begin() , costs.end());
        for(int cost : costs){
            if(coins >= cost){ 
            coins -= cost;
            cnt++;
        }else
            break;
        }
      return cnt;
    }
};