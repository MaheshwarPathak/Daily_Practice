class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = 0, r = 0, n = nums.size(), cnt = 0;
        vector<int>ans;
        while(r < n){
            if(nums[l] == nums[r]){
                r++;
                cnt++;
                if(cnt <= 2){
                    ans.push_back(nums[l]);
                } 
            }else{
                l = r;
                cnt = 0;
            }
        }
        for(int i = 0; i < ans.size(); i++){
            nums[i] = ans[i];
        }
        return ans.size();
    }
};