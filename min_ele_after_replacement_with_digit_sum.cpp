class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int>ans;
        for(int num: nums){
            int sum=0;
            while(num>0){
                sum+=num%10;
                num/=10;
            }
            ans.push_back(sum);
        }
        sort(ans.begin(),ans.end());
        return ans[0];
    }
};