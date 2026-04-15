 class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>even;
        vector<int>odd;
        for(int i = 0; i<nums.size(); i++){
            if(i%2 == 0){
                even.push_back(nums[i]);
            }else{
                odd.push_back(nums[i]);
            }
        }

        vector<int>ans;
        sort(even.begin(), even.end(), greater<int>());
        sort(odd.begin(), odd.end());

        for(int i = 0; i<nums.size(); i++){
            if(i%2 ==0){
                int no = even.back();
                even.pop_back();
                ans.push_back(no);
            }else{
                int no = odd.back();
                odd.pop_back();
                ans.push_back(no);
            }
        }

        return ans;
    }
}; 